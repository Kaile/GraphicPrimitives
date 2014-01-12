object Form1: TForm1
  Left = 850
  Top = 150
  Width = 436
  Height = 497
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
    Top = 284
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
    Left = 49
    Top = 256
    Width = 35
    Height = 13
    Caption = #1057#1090#1080#1083#1100':'
  end
  object Label9: TLabel
    Left = 230
    Top = 16
    Width = 165
    Height = 13
    Caption = #1057#1087#1080#1089#1086#1082' '#1075#1088#1072#1092#1080#1095#1077#1089#1082#1080#1093' '#1101#1083#1077#1084#1077#1085#1090#1086#1074':'
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
    Top = 304
    Width = 203
    Height = 145
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
    Top = 212
    Width = 97
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1092#1086#1088#1084#1091
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 136
    Top = 212
    Width = 81
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 8
    OnClick = Button2Click
  end
  object LineStyle: TComboBox
    Left = 104
    Top = 252
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
  object ButtonDelete: TButton
    Left = 234
    Top = 290
    Width = 171
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1074#1099#1073#1088#1072#1085#1085#1099#1077' '#1101#1083#1077#1084#1077#1085#1090#1099
    TabOrder = 13
    OnClick = ButtonDeleteClick
  end
  object ButtonMove: TButton
    Left = 234
    Top = 366
    Width = 171
    Height = 25
    Caption = #1055#1077#1088#1077#1084#1077#1089#1090#1080#1090#1100' '#1101#1083#1077#1084#1077#1085#1090'('#1099')'
    TabOrder = 14
    OnClick = ButtonMoveClick
  end
  object CheckListPrimitiveElements: TCheckListBox
    Left = 230
    Top = 36
    Width = 173
    Height = 239
    ItemHeight = 13
    TabOrder = 15
  end
  object LabeledEditMoveX: TLabeledEdit
    Left = 236
    Top = 334
    Width = 37
    Height = 21
    EditLabel.Width = 76
    EditLabel.Height = 13
    EditLabel.Caption = #1057#1084#1077#1097#1077#1085#1080#1077' '#1087#1086' X'
    LabelPosition = lpAbove
    LabelSpacing = 3
    TabOrder = 16
    Text = '10'
    OnClick = LabeledEditMoveXClick
  end
  object LabeledEditMoveY: TLabeledEdit
    Left = 328
    Top = 334
    Width = 35
    Height = 21
    EditLabel.Width = 76
    EditLabel.Height = 13
    EditLabel.Caption = #1057#1084#1077#1097#1077#1085#1080#1077' '#1087#1086' Y'
    LabelPosition = lpAbove
    LabelSpacing = 3
    TabOrder = 17
    Text = '10'
    OnClick = LabeledEditMoveYClick
  end
end
