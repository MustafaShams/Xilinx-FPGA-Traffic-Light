<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A1" />
        <signal name="A0" />
        <signal name="S3" />
        <signal name="b" />
        <signal name="N0" />
        <signal name="XLXN_43" />
        <signal name="XLXN_44" />
        <signal name="XLXN_45" />
        <signal name="N1" />
        <signal name="Reset" />
        <signal name="S1" />
        <signal name="XLXN_63" />
        <signal name="XLXN_64" />
        <signal name="S0" />
        <signal name="S2" />
        <port polarity="Input" name="A1" />
        <port polarity="Input" name="A0" />
        <port polarity="Output" name="S3" />
        <port polarity="Input" name="b" />
        <port polarity="Output" name="N0" />
        <port polarity="Output" name="N1" />
        <port polarity="Input" name="Reset" />
        <port polarity="Output" name="S1" />
        <port polarity="Output" name="S0" />
        <port polarity="Output" name="S2" />
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <blockdef name="and3b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="and3b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="or3b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="28" y1="-64" y2="-64" x1="0" />
            <circle r="10" cx="38" cy="-62" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="60" cy="-128" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-128" y2="-128" x1="40" />
        </blockdef>
        <blockdef name="and2b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
        </blockdef>
        <blockdef name="and2b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <arc ex="112" ey="-208" sx="192" sy="-160" r="88" cx="116" cy="-120" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <line x2="48" y1="-112" y2="-112" x1="112" />
            <line x2="48" y1="-256" y2="-208" x1="48" />
            <line x2="48" y1="-64" y2="-112" x1="48" />
            <arc ex="48" ey="-208" sx="48" sy="-112" r="56" cx="16" cy="-160" />
            <arc ex="192" ey="-160" sx="112" sy="-112" r="88" cx="116" cy="-200" />
        </blockdef>
        <block symbolname="and3b2" name="XLXI_8">
            <blockpin signalname="Reset" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="A1" name="I2" />
            <blockpin signalname="S3" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_16">
            <blockpin signalname="Reset" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="b" name="I2" />
            <blockpin signalname="N0" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_18">
            <blockpin signalname="A1" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="XLXN_44" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_20">
            <blockpin signalname="A0" name="I0" />
            <blockpin signalname="A1" name="I1" />
            <blockpin signalname="b" name="I2" />
            <blockpin signalname="XLXN_43" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_17">
            <blockpin signalname="A1" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="XLXN_45" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_24">
            <blockpin signalname="Reset" name="I0" />
            <blockpin signalname="XLXN_45" name="I1" />
            <blockpin signalname="XLXN_44" name="I2" />
            <blockpin signalname="XLXN_43" name="I3" />
            <blockpin signalname="N1" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_25">
            <blockpin signalname="Reset" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="A1" name="I2" />
            <blockpin signalname="S0" name="O" />
        </block>
        <block symbolname="or3b2" name="XLXI_11">
            <blockpin signalname="A0" name="I0" />
            <blockpin signalname="A1" name="I1" />
            <blockpin signalname="Reset" name="I2" />
            <blockpin signalname="S1" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_33">
            <blockpin signalname="A1" name="I0" />
            <blockpin signalname="A0" name="I1" />
            <blockpin signalname="XLXN_63" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_34">
            <blockpin signalname="XLXN_63" name="I0" />
            <blockpin signalname="Reset" name="I1" />
            <blockpin signalname="S2" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="992" y="1040" name="XLXI_8" orien="R0" />
        <iomarker fontsize="28" x="768" y="1904" name="A1" orien="R90" />
        <iomarker fontsize="28" x="832" y="1904" name="A0" orien="R90" />
        <iomarker fontsize="28" x="896" y="1904" name="Reset" orien="R90" />
        <branch name="S3">
            <wire x2="1280" y1="912" y2="912" x1="1248" />
        </branch>
        <iomarker fontsize="28" x="1280" y="912" name="S3" orien="R0" />
        <instance x="1056" y="832" name="XLXI_16" orien="R0" />
        <iomarker fontsize="28" x="704" y="1904" name="b" orien="R90" />
        <branch name="N0">
            <wire x2="1344" y1="704" y2="704" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1344" y="704" name="N0" orien="R0" />
        <instance x="1008" y="480" name="XLXI_18" orien="R0" />
        <instance x="1008" y="368" name="XLXI_20" orien="R0" />
        <instance x="1008" y="608" name="XLXI_17" orien="R0" />
        <instance x="1312" y="608" name="XLXI_24" orien="R0" />
        <branch name="XLXN_43">
            <wire x2="1312" y1="240" y2="240" x1="1264" />
            <wire x2="1312" y1="240" y2="352" x1="1312" />
        </branch>
        <branch name="XLXN_44">
            <wire x2="1280" y1="384" y2="384" x1="1264" />
            <wire x2="1280" y1="384" y2="416" x1="1280" />
            <wire x2="1312" y1="416" y2="416" x1="1280" />
        </branch>
        <branch name="XLXN_45">
            <wire x2="1280" y1="512" y2="512" x1="1264" />
            <wire x2="1280" y1="480" y2="512" x1="1280" />
            <wire x2="1312" y1="480" y2="480" x1="1280" />
        </branch>
        <branch name="b">
            <wire x2="1008" y1="176" y2="176" x1="704" />
            <wire x2="704" y1="176" y2="480" x1="704" />
            <wire x2="1008" y1="480" y2="480" x1="704" />
            <wire x2="704" y1="480" y2="640" x1="704" />
            <wire x2="1056" y1="640" y2="640" x1="704" />
            <wire x2="704" y1="640" y2="1904" x1="704" />
        </branch>
        <branch name="A0">
            <wire x2="1008" y1="304" y2="304" x1="832" />
            <wire x2="832" y1="304" y2="352" x1="832" />
            <wire x2="1008" y1="352" y2="352" x1="832" />
            <wire x2="832" y1="352" y2="704" x1="832" />
            <wire x2="1056" y1="704" y2="704" x1="832" />
            <wire x2="832" y1="704" y2="912" x1="832" />
            <wire x2="992" y1="912" y2="912" x1="832" />
            <wire x2="832" y1="912" y2="1184" x1="832" />
            <wire x2="1008" y1="1184" y2="1184" x1="832" />
            <wire x2="832" y1="1184" y2="1328" x1="832" />
            <wire x2="832" y1="1328" y2="1456" x1="832" />
            <wire x2="832" y1="1456" y2="1632" x1="832" />
            <wire x2="832" y1="1632" y2="1904" x1="832" />
            <wire x2="1024" y1="1632" y2="1632" x1="832" />
            <wire x2="992" y1="1456" y2="1456" x1="832" />
        </branch>
        <branch name="N1">
            <wire x2="1600" y1="448" y2="448" x1="1568" />
        </branch>
        <iomarker fontsize="28" x="1600" y="448" name="N1" orien="R0" />
        <branch name="Reset">
            <wire x2="896" y1="608" y2="768" x1="896" />
            <wire x2="896" y1="768" y2="976" x1="896" />
            <wire x2="992" y1="976" y2="976" x1="896" />
            <wire x2="896" y1="976" y2="1120" x1="896" />
            <wire x2="1008" y1="1120" y2="1120" x1="896" />
            <wire x2="1008" y1="1120" y2="1152" x1="1008" />
            <wire x2="1296" y1="1152" y2="1152" x1="1008" />
            <wire x2="896" y1="1120" y2="1328" x1="896" />
            <wire x2="896" y1="1328" y2="1424" x1="896" />
            <wire x2="896" y1="1424" y2="1696" x1="896" />
            <wire x2="896" y1="1696" y2="1904" x1="896" />
            <wire x2="1024" y1="1696" y2="1696" x1="896" />
            <wire x2="992" y1="1328" y2="1328" x1="896" />
            <wire x2="1056" y1="768" y2="768" x1="896" />
            <wire x2="1312" y1="608" y2="608" x1="896" />
            <wire x2="1312" y1="544" y2="608" x1="1312" />
        </branch>
        <branch name="A1">
            <wire x2="1008" y1="240" y2="240" x1="768" />
            <wire x2="768" y1="240" y2="416" x1="768" />
            <wire x2="1008" y1="416" y2="416" x1="768" />
            <wire x2="768" y1="416" y2="544" x1="768" />
            <wire x2="1008" y1="544" y2="544" x1="768" />
            <wire x2="768" y1="544" y2="848" x1="768" />
            <wire x2="992" y1="848" y2="848" x1="768" />
            <wire x2="768" y1="848" y2="1248" x1="768" />
            <wire x2="1008" y1="1248" y2="1248" x1="768" />
            <wire x2="768" y1="1248" y2="1344" x1="768" />
            <wire x2="768" y1="1344" y2="1392" x1="768" />
            <wire x2="768" y1="1392" y2="1568" x1="768" />
            <wire x2="768" y1="1568" y2="1904" x1="768" />
            <wire x2="1024" y1="1568" y2="1568" x1="768" />
            <wire x2="992" y1="1392" y2="1392" x1="768" />
        </branch>
        <instance x="1024" y="1760" name="XLXI_25" orien="R0" />
        <iomarker fontsize="28" x="1280" y="1392" name="S1" orien="R0" />
        <branch name="S1">
            <wire x2="1280" y1="1392" y2="1392" x1="1248" />
        </branch>
        <instance x="992" y="1520" name="XLXI_11" orien="R0" />
        <instance x="1008" y="1312" name="XLXI_33" orien="R0" />
        <branch name="XLXN_63">
            <wire x2="1296" y1="1216" y2="1216" x1="1264" />
        </branch>
        <instance x="1296" y="1280" name="XLXI_34" orien="R0" />
        <branch name="S0">
            <wire x2="1312" y1="1632" y2="1632" x1="1280" />
        </branch>
        <iomarker fontsize="28" x="1312" y="1632" name="S0" orien="R0" />
        <branch name="S2">
            <wire x2="1584" y1="1184" y2="1184" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1584" y="1184" name="S2" orien="R0" />
    </sheet>
</drawing>