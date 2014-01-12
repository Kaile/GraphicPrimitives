object Form1: TForm1
  Left = 1000
  Top = 150
  Width = 250
  Height = 484
  Caption = #1043#1088#1072#1092#1080#1095#1077#1089#1082#1080#1077' '#1087#1088#1080#1084#1080#1090#1080#1074#1099
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 17
    Width = 77
    Height = 13
    Caption = #1050#1086#1086#1088#1076#1080#1085#1072#1090#1072' X1'
  end
  object Label2: TLabel
    Left = 120
    Top = 17
    Width = 77
    Height = 13
    Caption = #1050#1086#1086#1088#1076#1080#1085#1072#1090#1072' X2'
  end
  object Label3: TLabel
    Left = 24
    Top = 63
    Width = 77
    Height = 13
    Caption = #1050#1086#1086#1088#1076#1080#1085#1072#1090#1072' Y1'
  end
  object Label4: TLabel
    Left = 120
    Top = 63
    Width = 77
    Height = 13
    Caption = #1050#1086#1086#1088#1076#1080#1085#1072#1090#1072' Y2'
  end
  object Label6: TLabel
    Left = 13
    Top = 113
    Width = 76
    Height = 13
    Caption = #1062#1074#1077#1090' '#1101#1083#1077#1084#1077#1085#1090#1072
  end
  object Label5: TLabel
    Left = 14
    Top = 348
    Width = 123
    Height = 13
    Caption = #1057#1086#1086#1073#1097#1077#1085#1080#1103' '#1087#1088#1080#1083#1086#1078#1077#1085#1080#1103
  end
  object Label7: TLabel
    Left = 122
    Top = 113
    Width = 101
    Height = 13
    Caption = #1058#1086#1083#1097#1080#1085#1072' '#1088#1080#1089#1086#1074#1072#1085#1080#1103
  end
  object Label8: TLabel
    Left = 33
    Top = 320
    Width = 35
    Height = 13
    Caption = #1057#1090#1080#1083#1100':'
  end
  object EditY1: TEdit
    Left = 48
    Top = 82
    Width = 30
    Height = 21
    MaxLength = 3
    TabOrder = 0
    Text = '100'
    OnClick = EditY1Click
  end
  object EditX2: TEdit
    Left = 136
    Top = 36
    Width = 30
    Height = 21
    MaxLength = 3
    TabOrder = 1
    Text = '200'
    OnClick = EditX2Click
  end
  object EditY2: TEdit
    Left = 136
    Top = 82
    Width = 30
    Height = 21
    MaxLength = 3
    TabOrder = 2
    Text = '300'
    OnClick = EditY2Click
  end
  object ColorBoxElement: TColorBox
    Left = 16
    Top = 132
    Width = 111
    Height = 22
    ItemHeight = 16
    TabOrder = 3
  end
  object MemoStatMsg: TMemo
    Left = 14
    Top = 366
    Width = 203
    Height = 83
    ReadOnly = True
    TabOrder = 4
  end
  object EditWidth: TEdit
    Left = 150
    Top = 132
    Width = 25
    Height = 21
    ReadOnly = True
    TabOrder = 5
    Text = '1'
  end
  object UpDown1: TUpDown
    Left = 175
    Top = 132
    Width = 16
    Height = 21
    Associate = EditWidth
    Min = 1
    Max = 10
    Position = 1
    TabOrder = 6
    Wrap = False
  end
  object Button1: TButton
    Left = 24
    Top = 268
    Width = 97
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1092#1086#1088#1084#1091
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 136
    Top = 268
    Width = 81
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 8
    OnClick = Button2Click
  end
  object LineStyle: TComboBox
    Left = 104
    Top = 316
    Width = 113
    Height = 21
    BevelInner = bvNone
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 9
    Text = #1057#1087#1083#1086#1096#1085#1072#1103
    Items.Strings = (
      #1057#1087#1083#1086#1096#1085#1072#1103
      #1064#1090#1088#1080#1093#1086#1074#1072#1103
      #1055#1091#1085#1082#1090#1080#1088#1085#1072#1103)
  end
  object EditX1: TEdit
    Left = 46
    Top = 36
    Width = 30
    Height = 21
    TabOrder = 10
    Text = '100'
    OnClick = EditX1Click
  end
  object ButtonPaint: TButton
    Left = 136
    Top = 174
    Width = 81
    Height = 25
    Caption = #1053#1072#1088#1080#1089#1086#1074#1072#1090#1100
    TabOrder = 11
    OnClick = ButtonPaintClick
  end
  object ComboBoxSelectPrimitive: TComboBox
    Left = 16
    Top = 176
    Width = 113
    Height = 21
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 12
    Text = #1058#1086#1095#1082#1072
    OnChange = ComboBoxSelectPrimitiveChange
    Items.Strings = (
      #1058#1086#1095#1082#1072
      #1051#1080#1085#1080#1103
      #1055#1088#1103#1084#1086#1091#1075#1086#1083#1100#1085#1080#1082
      #1069#1083#1083#1080#1087#1089)
  end
end
