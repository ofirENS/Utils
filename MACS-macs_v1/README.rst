=======================
README for MACS (1.4.2)
=======================
Time-stamp: <2012-03-19 17:43:47 Tao Liu>

Introduction
============

With the improvement of sequencing techniques, chromatin
immunoprecipitation followed by high throughput sequencing (ChIP-Seq)
is getting popular to study genome-wide protein-DNA interactions. To
address the lack of powerful ChIP-Seq analysis method, we present a
novel algorithm, named Model-based Analysis of ChIP-Seq (MACS), for
identifying transcript factor binding sites. MACS captures the
influence of genome complexity to evaluate the significance of
enriched ChIP regions, and MACS improves the spatial resolution of
binding sites through combining the information of both sequencing tag
position and orientation. MACS can be easily used for ChIP-Seq data
alone, or with control sample with the increase of specificity.

Install
=======

Please check the file 'INSTALL' in the distribution.

Usage
=====

Parameters:
-----------

-t/--treatment FILENAME
~~~~~~~~~~~~~~~~~~~~~~~

This is the only REQUIRED parameter for MACS. If the format is
ELANDMULTIPET, user must provide two treatment files separated by
comma, e.g. s_1_1_eland_multi.txt,s_1_2_eland_multi.txt.

-c/--control
~~~~~~~~~~~~

The control or mock data file in either BED format or any ELAND output
format specified by --format option. Please follow the same direction
as for -t/--treatment.

-n/--name
~~~~~~~~~

The name string of the experiment. MACS will use this string NAME to
create output files like 'NAME_peaks.xls', 'NAME_negative_peaks.xls',
'NAME_peaks.bed' , 'NAME_summits.bed', 'NAME_model.r' and so on. So
please avoid any confliction between these filenames and your existing
files.

-f/--format FORMAT
~~~~~~~~~~~~~~~~~~

Format of tag file, can be "ELAND", "BED", "ELANDMULTI",
"ELANDEXPORT", "ELANDMULTIPET" (for pair-end tags), "SAM", "BAM" or
"BOWTIE". Default is "AUTO" which will allow MACS to decide the format
automatically. Please use "AUTO" only when you combine different
formats of files.

The BED format is defined in "http://genome.ucsc.edu/FAQ/FAQformat#format1".

If the format is ELAND, the file must be ELAND result output file,
each line MUST represents only ONE tag, with fields of:

1. Sequence name (derived from file name and line number if format is
   not Fasta)

2. Sequence

3. Type of match

    :NM: no match found.

    :QC: no matching done: QC failure (too many Ns basically).

    :RM: no matching done: repeat masked (may be seen if repeatFile.txt was specified).

    :U0: Best match found was a unique exact match.

    :U1: Best match found was a unique 1-error match. 

    :U2: Best match found was a unique 2-error match. 

    :R0: Multiple exact matches found.

    :R1: Multiple 1-error matches found, no exact matches.

    :R2: Multiple 2-error matches found, no exact or 1-error matches.

4. Number of exact matches found.

5. Number of 1-error matches found.

6. Number of 2-error matches found. Rest of fields are only seen if a
   unique best match was found (i.e. the match code in field 3 begins
   with "U").

7. Genome file in which match was found.

8. Position of match (bases in file are numbered starting at 1).

9. Direction of match (F=forward strand, R=reverse).

10. How N characters in read were interpreted: ("."=not applicable,
    "D"=deletion, "I"=insertion). Rest of fields are only seen in the
    case of a unique inexact match (i.e. the match code was U1 or U2).

11. Position and type of first substitution error (e.g. 12A: base 12
    was A, not whatever is was in read).

12. Position and type of first substitution error, as above. 

If the format is ELANDMULTI, the file must be ELAND output file from
multiple-match mode, each line MUST represents only ONE tag, with
fields of:

1. Sequence name

2. Sequence

3. Either NM, QC, RM (as described above) or the following:

4. x:y:z where x, y, and z are the number of exact, single-error, and
   2-error matches found.

5. Blank, if no matches found or if too many matches found, or the
   following: BAC_plus_vector.fa:163022R1,170128F2,E_coli.fa:3909847R1
   This says there are two matches to BAC_plus_vector.fa: one in the
   reverse direction starting at position 160322 with one error, one
   in the forward direction starting at position 170128 with two
   errors. There is also a single-error match to E_coli.fa.

If the data is from Pair-End sequencing. You can sepecify the format
as ELANDMULTIPET ( stands for ELAND Multiple-match Pair-End Tags),
then the --treat (and --control if needed) parameter must be two file
names separated by comma. Each file must be in ELAND multiple-match
format described above. e.g. ::

  macs14 --format ELANDMULTIPET -t s_1_1_eland_multi.txt,s_2_1_eland_multi.txt ...

If you use ELANDMULTIPET, you may need to modify --petdist parameter.

If the format is BAM/SAM, please check the definition in
(http://samtools.sourceforge.net/samtools.shtml).  Pair-end mapping
results can be saved in a single BAM file, if so, MACS will
automatically keep the left mate(5' end) tag.

If the format is BOWTIE, you need to provide the ASCII bowtie output
file with the suffix '.map'. Please note that, you need to make sure
that in the bowtie output, you only keep one location for one
read. Check the bowtie manual for detail if you want at
(http://bowtie-bio.sourceforge.net/manual.shtml)

Here is the definition for Bowtie output in ASCII characters I copied
from the above webpage:

1. Name of read that aligned

2. Orientation of read in the alignment, - for reverse complement, +
   otherwise

3. Name of reference sequence where alignment occurs, or ordinal ID if
   no name was provided

4. 0-based offset into the forward reference strand where leftmost
   character of the alignment occurs

5. Read sequence (reverse-complemented if orientation is -)

6. ASCII-encoded read qualities (reversed if orientation is -). The
   encoded quality values are on the Phred scale and the encoding is
   ASCII-offset by 33 (ASCII char !).

7. Number of other instances where the same read aligns against the
   same reference characters as were aligned against in this
   alignment. This is not the number of other places the read aligns
   with the same number of mismatches. The number in this column is
   generally not a good proxy for that number (e.g., the number in
   this column may be '0' while the number of other alignments with
   the same number of mismatches might be large). This column was
   previously described as "Reserved".

8. Comma-separated list of mismatch descriptors. If there are no
   mismatches in the alignment, this field is empty. A single
   descriptor has the format offset:reference-base>read-base. The
   offset is expressed as a 0-based offset from the high-quality (5')
   end of the read.

Notes:

1. For BED format, the 6th column of strand information is required by
   MACS. And please pay attention that the coordinates in BED format
   is zero-based and half-open
   (http://genome.ucsc.edu/FAQ/FAQtracks#tracks1).

2. For plain ELAND format, only matches with match type U0, U1 or U2
   is accepted by MACS, i.e. only the unique match for a sequence with
   less than 3 errors is involed in calculation. If multiple hits of a
   single tag are included in your raw ELAND file, please remove the
   redundancy to keep the best hit for that sequencing tag.

3. For the experiment with several replicates, it is recommended to
   concatenate several ChIP-seq treatment files into a single file. To
   do this, under Unix/Mac or Cygwin (for windows OS), type::

       cat replicate1.bed replicate2.bed replicate3.bed > all_replicates.bed

4. ELAND export format support sometimes may not work on your
   datasets, because people may mislabel the 11th and 12th
   column. MACS uses 11th column as the sequence name which should be
   the chromosome names.

--petdist=PETDIST 
~~~~~~~~~~~~~~~~~

Best distance between Pair-End Tags. Only available when format is
'ELANDMULTIPE'. Default is 200bps. When MACS reads mapped positions
for 5' tag and 3' tag, it will decide the best pairing for them using
this best distance parameter. A simple scoring system is used as following::

  score = abs(abs(p5-p3)-200)+e5+e5

Where p5 is one of the position of 5' tag, and e5 is the
mismatch/error for this mapped position of 5' tag. p3 and e3 are for
3' tag. Then the lowest scored paring is regarded as the best
pairing. The 5' tag position of the pair is kept in model building and
peak calling.

-g/--gsize
~~~~~~~~~~

PLEASE assign this parameter to fit your needs!

It's the mappable genome size or effective genome size which is
defined as the genome size which can be sequenced. Because of the
repetitive features on the chromsomes, the actual mappable genome size
will be smaller than the original size, about 90% or 70% of the genome
size. The default hs -- 2.7e9 is recommended for UCSC human hg18
assembly. Here are all precompiled parameters for effective genome size::

  -g hs   =  -g 2.7e9
  -g mm   =  -g 1.87e9
  -g ce   =  -g 9e7
  -g dm   =  -g 1.2e8

-s/--tsize
~~~~~~~~~~

The size of sequencing tags. If you DON'T specify it, MACS will try to
use the first 10 sequences from your input treatment file to determine
the tag size. Specifying it will override the automatic determined tag
size.

--bw
~~~~

The band width which is used to scan the genome for model
building. You can set this parameter as the sonication fragment size
expected from wet experiment. The previous side effect on the peak
detection process has been removed. So this parameter only affects the
model building.

-p/--pvalue
~~~~~~~~~~~

The pvalue cutoff. Default is 1e-5.

-m/--mfold
~~~~~~~~~~

This parameter is used to select the regions within MFOLD range of
high-confidence enrichment ratio against background to build
model. The regions must be lower than upper limit, and higher than the
lower limit of fold enrichment. DEFAULT:10,30 means using all regions
not too low (>10) and not too high (<30) to build paired-peaks
model. If MACS can not find more than 100 regions to build model, it
will use the --shiftsize parameter to continue the peak detection.

Check related *--off-auto* and *--shiftsize*  for detail.

--nolambda
~~~~~~~~~~

With this flag on, MACS will use the background lambda as local
lambda. This means MACS will not consider the local bias at peak
candidate regions.

--slocal, --llocal
~~~~~~~~~~~~~~~~~~

These two parameters control which two levels of regions will be
checked around the peak regions to calculate the maximum lambda as
local lambda. By default, MACS considers 1000bp for small local
region(--slocal), and 10000bps for large local region(--llocal)
which captures the bias from a long range effect like an open
chromatin domain. You can tweak these according to your
project. Remember that if the region is set too small, a sharp spike
in the input data may kill the significant peak.

--on-auto
~~~~~~~~~

Whether turn on the auto paired-peak model process. If set, when MACS
failed to build paired model, it will use the nomodel settings, the
'--shiftsize' parameter to shift and extend each tags. If not set,
MACS will be terminated if paried-peak model is failed.

--nomodel
~~~~~~~~~

While on, MACS will bypass building the shifting model.

--shiftsize
~~~~~~~~~~~

While '--nomodel' is set, MACS uses this parameter to shift tags to
their midpoint. For example, if the size of binding region for your
transcription factor is 200 bp, and you want to bypass the model
building by MACS, this parameter can be set as 100. This option is
only valid when --nomodel is set or when MACS fails to build
paired-peak model.

--keep-dup
~~~~~~~~~~

It controls the MACS behavior towards duplicate tags at the exact same
location -- the same coordination and the same strand. The default
'auto' option makes MACS calculate the maximum tags at the exact same
location based on binomal distribution using 1e-5 as pvalue cutoff;
and the 'all' option keeps every tags.  If an integer is given, at
most this number of tags will be kept at the same location. Default: 1.

--to-large 
~~~~~~~~~~

When not set, scale the larger dataset down to the smaller dataset;
when set, the smaller dataset will be scaled towards the larger
dataset.

-w/--wig
~~~~~~~~

If this flag is on, MACS will store the fragment pileup in wiggle
format for every chromosome. The gzipped wiggle files will be stored
in subdirectories named NAME+'_MACS_wiggle/treat' for treatment data
and NAME+'_MACS_wiggle/control' for control data. --single-profile
option can be combined to generate a single wig file for the whole
genome.

-B/--bdg
~~~~~~~~

If this flag is on, MACS will store the fragment pileup in bedGraph
format for every chromosome. The bedGraph file is in general much
smaller than wiggle file. However, The process will take a little bit
longer than -w option, since theoratically 1bp resolution data will be
saved. The bedGraph files will be gzipped and stored in subdirectories
named NAME+'_MACS_bedGraph/treat' for treatment and
NAME+'_MACS_bedGraph/control' for control data.  --single-profile
option can be combined to generate a single bedGraph file for the
whole genome.

-S/--single-profile (formerly --single-wig)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

If this flag is on, MACS will store the fragment pileup in wiggle or
bedGraph format for the whole genome instead of for every
chromosomes. The gzipped wiggle files will be stored in subdirectories
named EXPERIMENT_NAME+'_MACS_wiggle'+'_MACS_wiggle/treat/'
+EXPERIMENT_NAME+'treat_afterfiting_all.wig.gz' or
'treat_afterfiting_all.bdg.gz' for treatment data, and
EXPERIMENT_NAME+'_MACS_wiggle'+'_MACS_wiggle/control/'
+EXPERIMENT_NAME+'control_afterfiting_all.wig.gz' or
'control_afterfiting_all.bdg.gz' for control data.

--space=SPACE 
~~~~~~~~~~~~~

By default, the resoluation for saving wiggle files is 10 bps,i.e.,
MACS will save the raw tag count every 10 bps. You can change it along
with '--wig' option.

Note this option doesn't work if -B/--bdg is on.

--call-subpeaks 
~~~~~~~~~~~~~~~

If set, MACS will invoke Mali Salmon's PeakSplitter software through
system call. If PeakSplitter can't be found, an instruction will be
shown for downloading and installing the PeakSplitter package. The
PeakSplitter can refine the MACS peaks and split the wide peaks into
smaller subpeaks. For more information, please check the following URL:

http://www.ebi.ac.uk/bertone/software/PeakSplitter_Cpp_usage.txt

Note this option doesn't work if -B/--bdg is on.

--verbose
~~~~~~~~~

If you don't want to see any message during the running of MACS, set
it to 0. But the CRITICAL messages will never be hidden. If you want
to see rich information like how many peaks are called for every
chromosome, you can set it to 3 or larger than 3.

--diag
~~~~~~

A diagnosis report can be generated through this option. This report
can help you get an assumption about the sequencing saturation. This
funtion is only in beta stage.

--fe-min, --fe-max & --fe-step
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

For diagnostics, FEMIN and FEMAX are the minimum and maximum fold
enrichment to consider, and FESTEP is the interval of fold
enrichment. For example, "--fe-min 0 --fe-max 40 --fe-step 10" will
let MACS choose the following fold enrichment ranges to consider:
[0,10), [10,20), [20,30) and [30,40).

Output files
------------

1. NAME_peaks.xls is a tabular file which contains information about
   called peaks. You can open it in excel and sort/filter using excel
   functions. Information include: chromosome name, start position of
   peak, end position of peak, length of peak region, peak summit
   position related to the start position of peak region, number of
   tags in peak region, -10*log10(pvalue) for the peak region
   (e.g. pvalue =1e-10, then this value should be 100), fold
   enrichment for this region against random Poisson distribution with
   local lambda, FDR in percentage. Coordinates in XLS is 1-based
   which is different with BED format.

2. NAME_peaks.bed is BED format file which contains the peak
   locations. You can load it to UCSC genome browser or Affymetrix IGB
   software. The 5th column in this file is the -10*log10pvalue of
   peak region.

3. NAME_summits.bed is in BED format, which contains the peak summits
   locations for every peaks. The 5th column in this file is the
   summit height of fragment pileup. If you want to find the motifs at
   the binding sites, this file is recommended.

4. NAME_negative_peaks.xls is a tabular file which contains
   information about negative peaks. Negative peaks are called by
   swapping the ChIP-seq and control channel.

5. NAME_model.r is an R script which you can use to produce a PDF
   image about the model based on your data. Load it to R by::

       R --vanilla < NAME_model.r

   Then a pdf file NAME_model.pdf will be generated in your current
   directory. Note, R is required to draw this figure.

6. NAME_treat/control_afterfiting.wig.gz files in NAME_MACS_wiggle
   directory are wiggle format files which can be imported to UCSC
   genome browser/GMOD/Affy IGB. The .bdg.gz files are in bedGraph
   format which can also be imported to UCSC genome browser or be
   converted into even smaller bigWig files.

7. NAME_diag.xls is the diagnosis report. First column is for various
   fold_enrichment ranges; the second column is number of peaks for
   that fc range; after 3rd columns are the percentage of peaks
   covered after sampling 90%, 80%, 70% ... and 20% of the total tags.

8. NAME_peaks.subpeaks.bed is a text file which IS NOT in BED
   format. This file is generated by PeakSplitter
   (<http://www.ebi.ac.uk/bertone/software/PeakSplitter_Cpp_usage.txt>)
   when --call-subpeaks option is set.

Other useful links
==================

Cistrome web server for ChIP-chip/seq analysis: http://cistrome.org/ap/

bedTools -- a super useful toolkits for genome annotation files: http://code.google.com/p/bedtools/

UCSC toolkits: http://hgdownload.cse.ucsc.edu/admin/exe/
