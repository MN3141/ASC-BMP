object fPrincipal: TfPrincipal
  Left = 488
  Top = 170
  Width = 1044
  Height = 515
  Caption = 'IPRS'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object titleLabel: TLabel
    Left = 384
    Top = 24
    Width = 47
    Height = 13
    Caption = 'ASC-BMP'
  end
  object inputMemo: TMemo
    Left = 368
    Top = 136
    Width = 241
    Height = 113
    Lines.Strings = (
      'inputMemo')
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object btnGenImagine: TButton
    Left = 224
    Top = 304
    Width = 121
    Height = 65
    Caption = 'Generare imagine'
    TabOrder = 1
    OnClick = btnGenImagineClick
  end
  object btnGenText: TButton
    Left = 496
    Top = 296
    Width = 153
    Height = 81
    Caption = 'Generare text'
    TabOrder = 2
    OnClick = btnGenTextClick
  end
end
