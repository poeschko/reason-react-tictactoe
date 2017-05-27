/*
 A ReasonML bridge to glamor for CSS-in-JS/Reason.

 Usage:

 * Simple styling:

    <div className=(Glamor.css color::"red" border::"1px solid black" [])> </div>

 * Styling with selectors (@media, :hover, &, etc.):

    <div className=(Glamor.css color::"red" [Glamor.selector "@media (min-width: 300px)" color::"green" []])> </div>

 * Selectors can be nested:

    <div className=(Glamor.css color::"red" [Glamor.selector "@media (min-width: 300px)" color::"green" [Glamor.selector "& .foo" color::"blue" []]])> </div>

 The list of CSS properties was taken from reactDOMRe.re.

 It's really ugly that the labeled function arguments have to be repeated that often.
 */
type styleObj;

external makeCSS : styleObj => string = "css" [@@bs.module "glamor"];

/* CSS2Properties: https://www.w3.org/TR/DOM-Level-2-Style/css.html#CSS-CSS2Properties */
external makeObj :
  azimuth::string? =>
  background::string? =>
  backgroundAttachment::string? =>
  backgroundColor::string? =>
  backgroundImage::string? =>
  backgroundPosition::string? =>
  backgroundRepeat::string? =>
  border::string? =>
  borderCollapse::string? =>
  borderColor::string? =>
  borderSpacing::string? =>
  borderStyle::string? =>
  borderTop::string? =>
  borderRight::string? =>
  borderBottom::string? =>
  borderLeft::string? =>
  borderTopColor::string? =>
  borderRightColor::string? =>
  borderBottomColor::string? =>
  borderLeftColor::string? =>
  borderTopStyle::string? =>
  borderRightStyle::string? =>
  borderBottomStyle::string? =>
  borderLeftStyle::string? =>
  borderTopWidth::string? =>
  borderRightWidth::string? =>
  borderBottomWidth::string? =>
  borderLeftWidth::string? =>
  borderWidth::string? =>
  bottom::string? =>
  captionSide::string? =>
  clear::string? =>
  clip::string? =>
  color::string? =>
  content::string? =>
  counterIncrement::string? =>
  counterReset::string? =>
  cue::string? =>
  cueAfter::string? =>
  cueBefore::string? =>
  cursor::string? =>
  direction::string? =>
  display::string? =>
  elevation::string? =>
  emptyCells::string? =>
  cssFloat::string? =>
  font::string? =>
  fontFamily::string? =>
  fontSize::string? =>
  fontSizeAdjust::string? =>
  fontStretch::string? =>
  fontStyle::string? =>
  fontVariant::string? =>
  fontWeight::string? =>
  height::string? =>
  left::string? =>
  letterSpacing::string? =>
  lineHeight::string? =>
  listStyle::string? =>
  listStyleImage::string? =>
  listStylePosition::string? =>
  listStyleType::string? =>
  margin::string? =>
  marginTop::string? =>
  marginRight::string? =>
  marginBottom::string? =>
  marginLeft::string? =>
  markerOffset::string? =>
  marks::string? =>
  maxHeight::string? =>
  maxWidth::string? =>
  minHeight::string? =>
  minWidth::string? =>
  orphans::string? =>
  outline::string? =>
  outlineColor::string? =>
  outlineStyle::string? =>
  outlineWidth::string? =>
  overflow::string? =>
  padding::string? =>
  paddingTop::string? =>
  paddingRight::string? =>
  paddingBottom::string? =>
  paddingLeft::string? =>
  page::string? =>
  pageBreakAfter::string? =>
  pageBreakBefore::string? =>
  pageBreakInside::string? =>
  pause::string? =>
  pauseAfter::string? =>
  pauseBefore::string? =>
  pitch::string? =>
  pitchRange::string? =>
  playDuring::string? =>
  position::string? =>
  quotes::string? =>
  richness::string? =>
  right::string? =>
  size::string? =>
  speak::string? =>
  speakHeader::string? =>
  speakNumeral::string? =>
  speakPunctuation::string? =>
  speechRate::string? =>
  stress::string? =>
  tableLayout::string? =>
  textAlign::string? =>
  textDecoration::string? =>
  textIndent::string? =>
  textShadow::string? =>
  textTransform::string? =>
  top::string? =>
  unicodeBidi::string? =>
  verticalAlign::string? =>
  visibility::string? =>
  voiceFamily::string? =>
  volume::string? =>
  whiteSpace::string? =>
  widows::string? =>
  width::string? =>
  wordSpacing::string? =>
  zIndex::string? =>
  /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
  /* Color Level 3 - REC */
  opacity::string? =>
  /* Backgrounds and Borders Level 3 - CR */
  /* backgroundRepeat - already defined by CSS2Properties */
  /* backgroundAttachment - already defined by CSS2Properties */
  backgroundOrigin::string? =>
  backgroundSize::string? =>
  backgroundClip::string? =>
  borderRadius::string? =>
  borderTopLeftRadius::string? =>
  borderTopRightRadius::string? =>
  borderBottomLeftRadius::string? =>
  borderBottomRightRadius::string? =>
  borderImage::string? =>
  borderImageSource::string? =>
  borderImageSlice::string? =>
  borderImageWidth::string? =>
  borderImageOutset::string? =>
  borderImageRepeat::string? =>
  boxShadow::string? =>
  /* Multi-column Layout - CR */
  columns::string? =>
  columnCount::string? =>
  columnFill::string? =>
  columnGap::string? =>
  columnRule::string? =>
  columnRuleColor::string? =>
  columnRuleStyle::string? =>
  columnRuleWidth::string? =>
  columnSpan::string? =>
  columnWidth::string? =>
  breakAfter::string? =>
  breakBefore::string? =>
  breakInside::string? =>
  /* Speech - CR */
  rest::string? =>
  restAfter::string? =>
  restBefore::string? =>
  speakAs::string? =>
  voiceBalance::string? =>
  voiceDuration::string? =>
  voicePitch::string? =>
  voiceRange::string? =>
  voiceRate::string? =>
  voiceStress::string? =>
  voiceVolume::string? =>
  /* Image Values and Replaced Content Level 3 - CR */
  objectFit::string? =>
  objectPosition::string? =>
  imageResolution::string? =>
  imageOrientation::string? =>
  /* Flexible Box Layout - CR */
  alignContent::string? =>
  alignItems::string? =>
  alignSelf::string? =>
  flex::string? =>
  flexBasis::string? =>
  flexDirection::string? =>
  flexFlow::string? =>
  flexGrow::string? =>
  flexShrink::string? =>
  flexWrap::string? =>
  justifyContent::string? =>
  order::string? =>
  /* Text Decoration Level 3 - CR */
  /* textDecoration - already defined by CSS2Properties */
  textDecorationColor::string? =>
  textDecorationLine::string? =>
  textDecorationSkip::string? =>
  textDecorationStyle::string? =>
  textEmphasis::string? =>
  textEmphasisColor::string? =>
  textEmphasisPosition::string? =>
  textEmphasisStyle::string? =>
  /* textShadow - already defined by CSS2Properties */
  textUnderlinePosition::string? =>
  /* Fonts Level 3 - CR */
  fontFeatureSettings::string? =>
  fontKerning::string? =>
  fontLanguageOverride::string? =>
  /* fontSizeAdjust - already defined by CSS2Properties */
  /* fontStretch - already defined by CSS2Properties */
  fontSynthesis::string? =>
  forntVariantAlternates::string? =>
  fontVariantCaps::string? =>
  fontVariantEastAsian::string? =>
  fontVariantLigatures::string? =>
  fontVariantNumeric::string? =>
  fontVariantPosition::string? =>
  /* Cascading and Inheritance Level 3 - CR */
  all::string? =>
  /* Writing Modes Level 3 - CR */
  glyphOrientationVertical::string? =>
  textCombineUpright::string? =>
  textOrientation::string? =>
  writingMode::string? =>
  /* Shapes Level 1 - CR */
  shapeImageThreshold::string? =>
  shapeMargin::string? =>
  shapeOutside::string? =>
  /* Masking Level 1 - CR */
  clipPath::string? =>
  clipRule::string? =>
  mask::string? =>
  maskBorder::string? =>
  maskBorderMode::string? =>
  maskBorderOutset::string? =>
  maskBorderRepeat::string? =>
  maskBorderSlice::string? =>
  maskBorderSource::string? =>
  maskBorderWidth::string? =>
  maskClip::string? =>
  maskComposite::string? =>
  maskImage::string? =>
  maskMode::string? =>
  maskOrigin::string? =>
  maskPosition::string? =>
  maskRepeat::string? =>
  maskSize::string? =>
  maskType::string? =>
  /* Compositing and Blending Level 1 - CR */
  backgroundBlendMode::string? =>
  isolation::string? =>
  mixBlendMode::string? =>
  /* Fragmentation Level 3 - CR */
  boxDecorationBreak::string? =>
  /* breakAfter - already defined by Multi-column Layout */
  /* breakBefore - already defined by Multi-column Layout */
  /* breakInside - already defined by Multi-column Layout */
  /* Basic User Interface Level 3 - CR */
  boxSizing::string? =>
  caretColor::string? =>
  navDown::string? =>
  navLeft::string? =>
  navRight::string? =>
  navUp::string? =>
  outlineOffset::string? =>
  resize::string? =>
  textOverflow::string? =>
  /* Grid Layout Level 1 - CR */
  grid::string? =>
  gridArea::string? =>
  gridAutoColumns::string? =>
  gridAutoFlow::string? =>
  gridAutoRows::string? =>
  gridColumn::string? =>
  gridColumnEnd::string? =>
  gridColumnGap::string? =>
  gridColumnStart::string? =>
  gridGap::string? =>
  gridRow::string? =>
  gridRowEnd::string? =>
  gridRowGap::string? =>
  gridRowStart::string? =>
  gridTemplate::string? =>
  gridTempalteAreas::string? =>
  gridTemplateColumns::string? =>
  gridTemplateRows::string? =>
  /* Will Change Level 1 - CR */
  willChange::string? =>
  /* Text Level 3 - LC */
  hangingPunctuation::string? =>
  hyphens::string? =>
  /* letterSpacing - already defined by CSS2Properties */
  lineBreak::string? =>
  overflowWrap::string? =>
  tabSize::string? =>
  /* textAlign - already defined by CSS2Properties */
  textAlignLast::string? =>
  textJustify::string? =>
  wordBreak::string? =>
  wordWrap::string? =>
  /* Animations - WD */
  animation::string? =>
  animationDelay::string? =>
  animationDirection::string? =>
  anumationDuration::string? =>
  animationFillMode::string? =>
  animationIterationCount::string? =>
  animationName::string? =>
  animationPlayState::string? =>
  animationTimingFunction::string? =>
  /* Transitions - WD */
  transition::string? =>
  transitionDelay::string? =>
  transitionDuration::string? =>
  transitionProperty::string? =>
  transitionTimingFunction::string? =>
  /* Transforms Level 1 - WD */
  backfaceVisibility::string? =>
  perspective::string? =>
  perspectiveOrigin::string? =>
  transform::string? =>
  transformOrigin::string? =>
  transformStyle::string? =>
  /* Box Alignment Level 3 - WD */
  /* alignContent - already defined by Flexible Box Layout */
  /* alignItems - already defined by Flexible Box Layout */
  justifyItems::string? =>
  justifySelf::string? =>
  placeContent::string? =>
  placeItems::string? =>
  placeSelf::string? =>
  /* Basic User Interface Level 4 - FPWD */
  appearance::string? =>
  caret::string? =>
  caretAnimation::string? =>
  caretShape::string? =>
  userSelect::string? =>
  /* Overflow Level 3 - WD */
  maxLines::string? =>
  /* Basix Box Model - WD */
  marqueeDirection::string? =>
  marqueeLoop::string? =>
  marqueeSpeed::string? =>
  marqueeStyle::string? =>
  overflowStyle::string? =>
  rotation::string? =>
  rotationPoint::string? =>
  /* svg */
  fill::string? =>
  stroke::string? =>
  strokeWidth::string? =>
  strokeMiterlimit::string? =>
  unit =>
  styleObj =
  "" [@@bs.obj];

let addKeyValueToStyles: styleObj => string => styleObj => styleObj = [%bs.raw
  {|
        function (obj, key, value) {
            var newObj = {};
            newObj[key] = value;
            return Object.assign({}, obj, newObj);
        }
    |}
];

let addSelectorToStyles styles (selectorKey, selectorStyles) =>
  addKeyValueToStyles styles selectorKey selectorStyles;

let combineStyles: styleObj => styleObj => styleObj = [%bs.raw
  {|
      function (a, b) {
        return Object.assign({}, a, b);
      }
    |}
];

let makeStyle
    ::azimuth=?
    ::background=?
    ::backgroundAttachment=?
    ::backgroundColor=?
    ::backgroundImage=?
    ::backgroundPosition=?
    ::backgroundRepeat=?
    ::border=?
    ::borderCollapse=?
    ::borderColor=?
    ::borderSpacing=?
    ::borderStyle=?
    ::borderTop=?
    ::borderRight=?
    ::borderBottom=?
    ::borderLeft=?
    ::borderTopColor=?
    ::borderRightColor=?
    ::borderBottomColor=?
    ::borderLeftColor=?
    ::borderTopStyle=?
    ::borderRightStyle=?
    ::borderBottomStyle=?
    ::borderLeftStyle=?
    ::borderTopWidth=?
    ::borderRightWidth=?
    ::borderBottomWidth=?
    ::borderLeftWidth=?
    ::borderWidth=?
    ::bottom=?
    ::captionSide=?
    ::clear=?
    ::clip=?
    ::color=?
    ::content=?
    ::counterIncrement=?
    ::counterReset=?
    ::cue=?
    ::cueAfter=?
    ::cueBefore=?
    ::cursor=?
    ::direction=?
    ::display=?
    ::elevation=?
    ::emptyCells=?
    ::cssFloat=?
    ::font=?
    ::fontFamily=?
    ::fontSize=?
    ::fontSizeAdjust=?
    ::fontStretch=?
    ::fontStyle=?
    ::fontVariant=?
    ::fontWeight=?
    ::height=?
    ::left=?
    ::letterSpacing=?
    ::lineHeight=?
    ::listStyle=?
    ::listStyleImage=?
    ::listStylePosition=?
    ::listStyleType=?
    ::margin=?
    ::marginTop=?
    ::marginRight=?
    ::marginBottom=?
    ::marginLeft=?
    ::markerOffset=?
    ::marks=?
    ::maxHeight=?
    ::maxWidth=?
    ::minHeight=?
    ::minWidth=?
    ::orphans=?
    ::outline=?
    ::outlineColor=?
    ::outlineStyle=?
    ::outlineWidth=?
    ::overflow=?
    ::padding=?
    ::paddingTop=?
    ::paddingRight=?
    ::paddingBottom=?
    ::paddingLeft=?
    ::page=?
    ::pageBreakAfter=?
    ::pageBreakBefore=?
    ::pageBreakInside=?
    ::pause=?
    ::pauseAfter=?
    ::pauseBefore=?
    ::pitch=?
    ::pitchRange=?
    ::playDuring=?
    ::position=?
    ::quotes=?
    ::richness=?
    ::right=?
    ::size=?
    ::speak=?
    ::speakHeader=?
    ::speakNumeral=?
    ::speakPunctuation=?
    ::speechRate=?
    ::stress=?
    ::tableLayout=?
    ::textAlign=?
    ::textDecoration=?
    ::textIndent=?
    ::textShadow=?
    ::textTransform=?
    ::top=?
    ::unicodeBidi=?
    ::verticalAlign=?
    ::visibility=?
    ::voiceFamily=?
    ::volume=?
    ::whiteSpace=?
    ::widows=?
    ::width=?
    ::wordSpacing=?
    ::zIndex=?
    /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
    /* Color Level 3 - REC */
    ::opacity=?
    /* Backgrounds and Borders Level 3 - CR */
    /* backgroundRepeat - already defined by CSS2Properties */
    /* backgroundAttachment - already defined by CSS2Properties */
    ::backgroundOrigin=?
    ::backgroundSize=?
    ::backgroundClip=?
    ::borderRadius=?
    ::borderTopLeftRadius=?
    ::borderTopRightRadius=?
    ::borderBottomLeftRadius=?
    ::borderBottomRightRadius=?
    ::borderImage=?
    ::borderImageSource=?
    ::borderImageSlice=?
    ::borderImageWidth=?
    ::borderImageOutset=?
    ::borderImageRepeat=?
    ::boxShadow=?
    /* Multi-column Layout - CR */
    ::columns=?
    ::columnCount=?
    ::columnFill=?
    ::columnGap=?
    ::columnRule=?
    ::columnRuleColor=?
    ::columnRuleStyle=?
    ::columnRuleWidth=?
    ::columnSpan=?
    ::columnWidth=?
    ::breakAfter=?
    ::breakBefore=?
    ::breakInside=?
    /* Speech - CR */
    ::rest=?
    ::restAfter=?
    ::restBefore=?
    ::speakAs=?
    ::voiceBalance=?
    ::voiceDuration=?
    ::voicePitch=?
    ::voiceRange=?
    ::voiceRate=?
    ::voiceStress=?
    ::voiceVolume=?
    /* Image Values and Replaced Content Level 3 - CR */
    ::objectFit=?
    ::objectPosition=?
    ::imageResolution=?
    ::imageOrientation=?
    /* Flexible Box Layout - CR */
    ::alignContent=?
    ::alignItems=?
    ::alignSelf=?
    ::flex=?
    ::flexBasis=?
    ::flexDirection=?
    ::flexFlow=?
    ::flexGrow=?
    ::flexShrink=?
    ::flexWrap=?
    ::justifyContent=?
    ::order=?
    /* Text Decoration Level 3 - CR */
    /* textDecoration - already defined by CSS2Properties */
    ::textDecorationColor=?
    ::textDecorationLine=?
    ::textDecorationSkip=?
    ::textDecorationStyle=?
    ::textEmphasis=?
    ::textEmphasisColor=?
    ::textEmphasisPosition=?
    ::textEmphasisStyle=?
    /* textShadow - already defined by CSS2Properties */
    ::textUnderlinePosition=?
    /* Fonts Level 3 - CR */
    ::fontFeatureSettings=?
    ::fontKerning=?
    ::fontLanguageOverride=?
    /* fontSizeAdjust - already defined by CSS2Properties */
    /* fontStretch - already defined by CSS2Properties */
    ::fontSynthesis=?
    ::forntVariantAlternates=?
    ::fontVariantCaps=?
    ::fontVariantEastAsian=?
    ::fontVariantLigatures=?
    ::fontVariantNumeric=?
    ::fontVariantPosition=?
    /* Cascading and Inheritance Level 3 - CR */
    ::all=?
    /* Writing Modes Level 3 - CR */
    ::glyphOrientationVertical=?
    ::textCombineUpright=?
    ::textOrientation=?
    ::writingMode=?
    /* Shapes Level 1 - CR */
    ::shapeImageThreshold=?
    ::shapeMargin=?
    ::shapeOutside=?
    /* Masking Level 1 - CR */
    ::clipPath=?
    ::clipRule=?
    ::mask=?
    ::maskBorder=?
    ::maskBorderMode=?
    ::maskBorderOutset=?
    ::maskBorderRepeat=?
    ::maskBorderSlice=?
    ::maskBorderSource=?
    ::maskBorderWidth=?
    ::maskClip=?
    ::maskComposite=?
    ::maskImage=?
    ::maskMode=?
    ::maskOrigin=?
    ::maskPosition=?
    ::maskRepeat=?
    ::maskSize=?
    ::maskType=?
    /* Compositing and Blending Level 1 - CR */
    ::backgroundBlendMode=?
    ::isolation=?
    ::mixBlendMode=?
    /* Fragmentation Level 3 - CR */
    ::boxDecorationBreak=?
    /* breakAfter - already defined by Multi-column Layout */
    /* breakBefore - already defined by Multi-column Layout */
    /* breakInside - already defined by Multi-column Layout */
    /* Basic User Interface Level 3 - CR */
    ::boxSizing=?
    ::caretColor=?
    ::navDown=?
    ::navLeft=?
    ::navRight=?
    ::navUp=?
    ::outlineOffset=?
    ::resize=?
    ::textOverflow=?
    /* Grid Layout Level 1 - CR */
    ::grid=?
    ::gridArea=?
    ::gridAutoColumns=?
    ::gridAutoFlow=?
    ::gridAutoRows=?
    ::gridColumn=?
    ::gridColumnEnd=?
    ::gridColumnGap=?
    ::gridColumnStart=?
    ::gridGap=?
    ::gridRow=?
    ::gridRowEnd=?
    ::gridRowGap=?
    ::gridRowStart=?
    ::gridTemplate=?
    ::gridTempalteAreas=?
    ::gridTemplateColumns=?
    ::gridTemplateRows=?
    /* Will Change Level 1 - CR */
    ::willChange=?
    /* Text Level 3 - LC */
    ::hangingPunctuation=?
    ::hyphens=?
    /* letterSpacing - already defined by CSS2Properties */
    ::lineBreak=?
    ::overflowWrap=?
    ::tabSize=?
    /* textAlign - already defined by CSS2Properties */
    ::textAlignLast=?
    ::textJustify=?
    ::wordBreak=?
    ::wordWrap=?
    /* Animations - WD */
    ::animation=?
    ::animationDelay=?
    ::animationDirection=?
    ::anumationDuration=?
    ::animationFillMode=?
    ::animationIterationCount=?
    ::animationName=?
    ::animationPlayState=?
    ::animationTimingFunction=?
    /* Transitions - WD */
    ::transition=?
    ::transitionDelay=?
    ::transitionDuration=?
    ::transitionProperty=?
    ::transitionTimingFunction=?
    /* Transforms Level 1 - WD */
    ::backfaceVisibility=?
    ::perspective=?
    ::perspectiveOrigin=?
    ::transform=?
    ::transformOrigin=?
    ::transformStyle=?
    /* Box Alignment Level 3 - WD */
    /* alignContent - already defined by Flexible Box Layout */
    /* alignItems - already defined by Flexible Box Layout */
    ::justifyItems=?
    ::justifySelf=?
    ::placeContent=?
    ::placeItems=?
    ::placeSelf=?
    /* Basic User Interface Level 4 - FPWD */
    ::appearance=?
    ::caret=?
    ::caretAnimation=?
    ::caretShape=?
    ::userSelect=?
    /* Overflow Level 3 - WD */
    ::maxLines=?
    /* Basix Box Model - WD */
    ::marqueeDirection=?
    ::marqueeLoop=?
    ::marqueeSpeed=?
    ::marqueeStyle=?
    ::overflowStyle=?
    ::rotation=?
    ::rotationPoint=?
    /* svg */
    ::fill=?
    ::stroke=?
    ::strokeWidth=?
    ::strokeMiterlimit=?
    extra => {
  let styles =
    makeObj
      ::?azimuth
      ::?background
      ::?backgroundAttachment
      ::?backgroundColor
      ::?backgroundImage
      ::?backgroundPosition
      ::?backgroundRepeat
      ::?border
      ::?borderCollapse
      ::?borderColor
      ::?borderSpacing
      ::?borderStyle
      ::?borderTop
      ::?borderRight
      ::?borderBottom
      ::?borderLeft
      ::?borderTopColor
      ::?borderRightColor
      ::?borderBottomColor
      ::?borderLeftColor
      ::?borderTopStyle
      ::?borderRightStyle
      ::?borderBottomStyle
      ::?borderLeftStyle
      ::?borderTopWidth
      ::?borderRightWidth
      ::?borderBottomWidth
      ::?borderLeftWidth
      ::?borderWidth
      ::?bottom
      ::?captionSide
      ::?clear
      ::?clip
      ::?color
      ::?content
      ::?counterIncrement
      ::?counterReset
      ::?cue
      ::?cueAfter
      ::?cueBefore
      ::?cursor
      ::?direction
      ::?display
      ::?elevation
      ::?emptyCells
      ::?cssFloat
      ::?font
      ::?fontFamily
      ::?fontSize
      ::?fontSizeAdjust
      ::?fontStretch
      ::?fontStyle
      ::?fontVariant
      ::?fontWeight
      ::?height
      ::?left
      ::?letterSpacing
      ::?lineHeight
      ::?listStyle
      ::?listStyleImage
      ::?listStylePosition
      ::?listStyleType
      ::?margin
      ::?marginTop
      ::?marginRight
      ::?marginBottom
      ::?marginLeft
      ::?markerOffset
      ::?marks
      ::?maxHeight
      ::?maxWidth
      ::?minHeight
      ::?minWidth
      ::?orphans
      ::?outline
      ::?outlineColor
      ::?outlineStyle
      ::?outlineWidth
      ::?overflow
      ::?padding
      ::?paddingTop
      ::?paddingRight
      ::?paddingBottom
      ::?paddingLeft
      ::?page
      ::?pageBreakAfter
      ::?pageBreakBefore
      ::?pageBreakInside
      ::?pause
      ::?pauseAfter
      ::?pauseBefore
      ::?pitch
      ::?pitchRange
      ::?playDuring
      ::?position
      ::?quotes
      ::?richness
      ::?right
      ::?size
      ::?speak
      ::?speakHeader
      ::?speakNumeral
      ::?speakPunctuation
      ::?speechRate
      ::?stress
      ::?tableLayout
      ::?textAlign
      ::?textDecoration
      ::?textIndent
      ::?textShadow
      ::?textTransform
      ::?top
      ::?unicodeBidi
      ::?verticalAlign
      ::?visibility
      ::?voiceFamily
      ::?volume
      ::?whiteSpace
      ::?widows
      ::?width
      ::?wordSpacing
      ::?zIndex
      /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
      /* Color Level 3 - REC */
      ::?opacity
      /* Backgrounds and Borders Level 3 - CR */
      /* backgroundRepeat - already defined by CSS2Properties */
      /* backgroundAttachment - already defined by CSS2Properties */
      ::?backgroundOrigin
      ::?backgroundSize
      ::?backgroundClip
      ::?borderRadius
      ::?borderTopLeftRadius
      ::?borderTopRightRadius
      ::?borderBottomLeftRadius
      ::?borderBottomRightRadius
      ::?borderImage
      ::?borderImageSource
      ::?borderImageSlice
      ::?borderImageWidth
      ::?borderImageOutset
      ::?borderImageRepeat
      ::?boxShadow
      /* Multi-column Layout - CR */
      ::?columns
      ::?columnCount
      ::?columnFill
      ::?columnGap
      ::?columnRule
      ::?columnRuleColor
      ::?columnRuleStyle
      ::?columnRuleWidth
      ::?columnSpan
      ::?columnWidth
      ::?breakAfter
      ::?breakBefore
      ::?breakInside
      /* Speech - CR */
      ::?rest
      ::?restAfter
      ::?restBefore
      ::?speakAs
      ::?voiceBalance
      ::?voiceDuration
      ::?voicePitch
      ::?voiceRange
      ::?voiceRate
      ::?voiceStress
      ::?voiceVolume
      /* Image Values and Replaced Content Level 3 - CR */
      ::?objectFit
      ::?objectPosition
      ::?imageResolution
      ::?imageOrientation
      /* Flexible Box Layout - CR */
      ::?alignContent
      ::?alignItems
      ::?alignSelf
      ::?flex
      ::?flexBasis
      ::?flexDirection
      ::?flexFlow
      ::?flexGrow
      ::?flexShrink
      ::?flexWrap
      ::?justifyContent
      ::?order
      /* Text Decoration Level 3 - CR */
      /* textDecoration - already defined by CSS2Properties */
      ::?textDecorationColor
      ::?textDecorationLine
      ::?textDecorationSkip
      ::?textDecorationStyle
      ::?textEmphasis
      ::?textEmphasisColor
      ::?textEmphasisPosition
      ::?textEmphasisStyle
      /* textShadow - already defined by CSS2Properties */
      ::?textUnderlinePosition
      /* Fonts Level 3 - CR */
      ::?fontFeatureSettings
      ::?fontKerning
      ::?fontLanguageOverride
      /* fontSizeAdjust - already defined by CSS2Properties */
      /* fontStretch - already defined by CSS2Properties */
      ::?fontSynthesis
      ::?forntVariantAlternates
      ::?fontVariantCaps
      ::?fontVariantEastAsian
      ::?fontVariantLigatures
      ::?fontVariantNumeric
      ::?fontVariantPosition
      /* Cascading and Inheritance Level 3 - CR */
      ::?all
      /* Writing Modes Level 3 - CR */
      ::?glyphOrientationVertical
      ::?textCombineUpright
      ::?textOrientation
      ::?writingMode
      /* Shapes Level 1 - CR */
      ::?shapeImageThreshold
      ::?shapeMargin
      ::?shapeOutside
      /* Masking Level 1 - CR */
      ::?clipPath
      ::?clipRule
      ::?mask
      ::?maskBorder
      ::?maskBorderMode
      ::?maskBorderOutset
      ::?maskBorderRepeat
      ::?maskBorderSlice
      ::?maskBorderSource
      ::?maskBorderWidth
      ::?maskClip
      ::?maskComposite
      ::?maskImage
      ::?maskMode
      ::?maskOrigin
      ::?maskPosition
      ::?maskRepeat
      ::?maskSize
      ::?maskType
      /* Compositing and Blending Level 1 - CR */
      ::?backgroundBlendMode
      ::?isolation
      ::?mixBlendMode
      /* Fragmentation Level 3 - CR */
      ::?boxDecorationBreak
      /* breakAfter - already defined by Multi-column Layout */
      /* breakBefore - already defined by Multi-column Layout */
      /* breakInside - already defined by Multi-column Layout */
      /* Basic User Interface Level 3 - CR */
      ::?boxSizing
      ::?caretColor
      ::?navDown
      ::?navLeft
      ::?navRight
      ::?navUp
      ::?outlineOffset
      ::?resize
      ::?textOverflow
      /* Grid Layout Level 1 - CR */
      ::?grid
      ::?gridArea
      ::?gridAutoColumns
      ::?gridAutoFlow
      ::?gridAutoRows
      ::?gridColumn
      ::?gridColumnEnd
      ::?gridColumnGap
      ::?gridColumnStart
      ::?gridGap
      ::?gridRow
      ::?gridRowEnd
      ::?gridRowGap
      ::?gridRowStart
      ::?gridTemplate
      ::?gridTempalteAreas
      ::?gridTemplateColumns
      ::?gridTemplateRows
      /* Will Change Level 1 - CR */
      ::?willChange
      /* Text Level 3 - LC */
      ::?hangingPunctuation
      ::?hyphens
      /* letterSpacing - already defined by CSS2Properties */
      ::?lineBreak
      ::?overflowWrap
      ::?tabSize
      /* textAlign - already defined by CSS2Properties */
      ::?textAlignLast
      ::?textJustify
      ::?wordBreak
      ::?wordWrap
      /* Animations - WD */
      ::?animation
      ::?animationDelay
      ::?animationDirection
      ::?anumationDuration
      ::?animationFillMode
      ::?animationIterationCount
      ::?animationName
      ::?animationPlayState
      ::?animationTimingFunction
      /* Transitions - WD */
      ::?transition
      ::?transitionDelay
      ::?transitionDuration
      ::?transitionProperty
      ::?transitionTimingFunction
      /* Transforms Level 1 - WD */
      ::?backfaceVisibility
      ::?perspective
      ::?perspectiveOrigin
      ::?transform
      ::?transformOrigin
      ::?transformStyle
      /* Box Alignment Level 3 - WD */
      /* alignContent - already defined by Flexible Box Layout */
      /* alignItems - already defined by Flexible Box Layout */
      ::?justifyItems
      ::?justifySelf
      ::?placeContent
      ::?placeItems
      ::?placeSelf
      /* Basic User Interface Level 4 - FPWD */
      ::?appearance
      ::?caret
      ::?caretAnimation
      ::?caretShape
      ::?userSelect
      /* Overflow Level 3 - WD */
      ::?maxLines
      /* Basix Box Model - WD */
      ::?marqueeDirection
      ::?marqueeLoop
      ::?marqueeSpeed
      ::?marqueeStyle
      ::?overflowStyle
      ::?rotation
      ::?rotationPoint
      /* svg */
      ::?fill
      ::?stroke
      ::?strokeWidth
      ::?strokeMiterlimit
      ();
  List.fold_left addSelectorToStyles styles extra
};

let selector
    key
    ::azimuth=?
    ::background=?
    ::backgroundAttachment=?
    ::backgroundColor=?
    ::backgroundImage=?
    ::backgroundPosition=?
    ::backgroundRepeat=?
    ::border=?
    ::borderCollapse=?
    ::borderColor=?
    ::borderSpacing=?
    ::borderStyle=?
    ::borderTop=?
    ::borderRight=?
    ::borderBottom=?
    ::borderLeft=?
    ::borderTopColor=?
    ::borderRightColor=?
    ::borderBottomColor=?
    ::borderLeftColor=?
    ::borderTopStyle=?
    ::borderRightStyle=?
    ::borderBottomStyle=?
    ::borderLeftStyle=?
    ::borderTopWidth=?
    ::borderRightWidth=?
    ::borderBottomWidth=?
    ::borderLeftWidth=?
    ::borderWidth=?
    ::bottom=?
    ::captionSide=?
    ::clear=?
    ::clip=?
    ::color=?
    ::content=?
    ::counterIncrement=?
    ::counterReset=?
    ::cue=?
    ::cueAfter=?
    ::cueBefore=?
    ::cursor=?
    ::direction=?
    ::display=?
    ::elevation=?
    ::emptyCells=?
    ::cssFloat=?
    ::font=?
    ::fontFamily=?
    ::fontSize=?
    ::fontSizeAdjust=?
    ::fontStretch=?
    ::fontStyle=?
    ::fontVariant=?
    ::fontWeight=?
    ::height=?
    ::left=?
    ::letterSpacing=?
    ::lineHeight=?
    ::listStyle=?
    ::listStyleImage=?
    ::listStylePosition=?
    ::listStyleType=?
    ::margin=?
    ::marginTop=?
    ::marginRight=?
    ::marginBottom=?
    ::marginLeft=?
    ::markerOffset=?
    ::marks=?
    ::maxHeight=?
    ::maxWidth=?
    ::minHeight=?
    ::minWidth=?
    ::orphans=?
    ::outline=?
    ::outlineColor=?
    ::outlineStyle=?
    ::outlineWidth=?
    ::overflow=?
    ::padding=?
    ::paddingTop=?
    ::paddingRight=?
    ::paddingBottom=?
    ::paddingLeft=?
    ::page=?
    ::pageBreakAfter=?
    ::pageBreakBefore=?
    ::pageBreakInside=?
    ::pause=?
    ::pauseAfter=?
    ::pauseBefore=?
    ::pitch=?
    ::pitchRange=?
    ::playDuring=?
    ::position=?
    ::quotes=?
    ::richness=?
    ::right=?
    ::size=?
    ::speak=?
    ::speakHeader=?
    ::speakNumeral=?
    ::speakPunctuation=?
    ::speechRate=?
    ::stress=?
    ::tableLayout=?
    ::textAlign=?
    ::textDecoration=?
    ::textIndent=?
    ::textShadow=?
    ::textTransform=?
    ::top=?
    ::unicodeBidi=?
    ::verticalAlign=?
    ::visibility=?
    ::voiceFamily=?
    ::volume=?
    ::whiteSpace=?
    ::widows=?
    ::width=?
    ::wordSpacing=?
    ::zIndex=?
    /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
    /* Color Level 3 - REC */
    ::opacity=?
    /* Backgrounds and Borders Level 3 - CR */
    /* backgroundRepeat - already defined by CSS2Properties */
    /* backgroundAttachment - already defined by CSS2Properties */
    ::backgroundOrigin=?
    ::backgroundSize=?
    ::backgroundClip=?
    ::borderRadius=?
    ::borderTopLeftRadius=?
    ::borderTopRightRadius=?
    ::borderBottomLeftRadius=?
    ::borderBottomRightRadius=?
    ::borderImage=?
    ::borderImageSource=?
    ::borderImageSlice=?
    ::borderImageWidth=?
    ::borderImageOutset=?
    ::borderImageRepeat=?
    ::boxShadow=?
    /* Multi-column Layout - CR */
    ::columns=?
    ::columnCount=?
    ::columnFill=?
    ::columnGap=?
    ::columnRule=?
    ::columnRuleColor=?
    ::columnRuleStyle=?
    ::columnRuleWidth=?
    ::columnSpan=?
    ::columnWidth=?
    ::breakAfter=?
    ::breakBefore=?
    ::breakInside=?
    /* Speech - CR */
    ::rest=?
    ::restAfter=?
    ::restBefore=?
    ::speakAs=?
    ::voiceBalance=?
    ::voiceDuration=?
    ::voicePitch=?
    ::voiceRange=?
    ::voiceRate=?
    ::voiceStress=?
    ::voiceVolume=?
    /* Image Values and Replaced Content Level 3 - CR */
    ::objectFit=?
    ::objectPosition=?
    ::imageResolution=?
    ::imageOrientation=?
    /* Flexible Box Layout - CR */
    ::alignContent=?
    ::alignItems=?
    ::alignSelf=?
    ::flex=?
    ::flexBasis=?
    ::flexDirection=?
    ::flexFlow=?
    ::flexGrow=?
    ::flexShrink=?
    ::flexWrap=?
    ::justifyContent=?
    ::order=?
    /* Text Decoration Level 3 - CR */
    /* textDecoration - already defined by CSS2Properties */
    ::textDecorationColor=?
    ::textDecorationLine=?
    ::textDecorationSkip=?
    ::textDecorationStyle=?
    ::textEmphasis=?
    ::textEmphasisColor=?
    ::textEmphasisPosition=?
    ::textEmphasisStyle=?
    /* textShadow - already defined by CSS2Properties */
    ::textUnderlinePosition=?
    /* Fonts Level 3 - CR */
    ::fontFeatureSettings=?
    ::fontKerning=?
    ::fontLanguageOverride=?
    /* fontSizeAdjust - already defined by CSS2Properties */
    /* fontStretch - already defined by CSS2Properties */
    ::fontSynthesis=?
    ::forntVariantAlternates=?
    ::fontVariantCaps=?
    ::fontVariantEastAsian=?
    ::fontVariantLigatures=?
    ::fontVariantNumeric=?
    ::fontVariantPosition=?
    /* Cascading and Inheritance Level 3 - CR */
    ::all=?
    /* Writing Modes Level 3 - CR */
    ::glyphOrientationVertical=?
    ::textCombineUpright=?
    ::textOrientation=?
    ::writingMode=?
    /* Shapes Level 1 - CR */
    ::shapeImageThreshold=?
    ::shapeMargin=?
    ::shapeOutside=?
    /* Masking Level 1 - CR */
    ::clipPath=?
    ::clipRule=?
    ::mask=?
    ::maskBorder=?
    ::maskBorderMode=?
    ::maskBorderOutset=?
    ::maskBorderRepeat=?
    ::maskBorderSlice=?
    ::maskBorderSource=?
    ::maskBorderWidth=?
    ::maskClip=?
    ::maskComposite=?
    ::maskImage=?
    ::maskMode=?
    ::maskOrigin=?
    ::maskPosition=?
    ::maskRepeat=?
    ::maskSize=?
    ::maskType=?
    /* Compositing and Blending Level 1 - CR */
    ::backgroundBlendMode=?
    ::isolation=?
    ::mixBlendMode=?
    /* Fragmentation Level 3 - CR */
    ::boxDecorationBreak=?
    /* breakAfter - already defined by Multi-column Layout */
    /* breakBefore - already defined by Multi-column Layout */
    /* breakInside - already defined by Multi-column Layout */
    /* Basic User Interface Level 3 - CR */
    ::boxSizing=?
    ::caretColor=?
    ::navDown=?
    ::navLeft=?
    ::navRight=?
    ::navUp=?
    ::outlineOffset=?
    ::resize=?
    ::textOverflow=?
    /* Grid Layout Level 1 - CR */
    ::grid=?
    ::gridArea=?
    ::gridAutoColumns=?
    ::gridAutoFlow=?
    ::gridAutoRows=?
    ::gridColumn=?
    ::gridColumnEnd=?
    ::gridColumnGap=?
    ::gridColumnStart=?
    ::gridGap=?
    ::gridRow=?
    ::gridRowEnd=?
    ::gridRowGap=?
    ::gridRowStart=?
    ::gridTemplate=?
    ::gridTempalteAreas=?
    ::gridTemplateColumns=?
    ::gridTemplateRows=?
    /* Will Change Level 1 - CR */
    ::willChange=?
    /* Text Level 3 - LC */
    ::hangingPunctuation=?
    ::hyphens=?
    /* letterSpacing - already defined by CSS2Properties */
    ::lineBreak=?
    ::overflowWrap=?
    ::tabSize=?
    /* textAlign - already defined by CSS2Properties */
    ::textAlignLast=?
    ::textJustify=?
    ::wordBreak=?
    ::wordWrap=?
    /* Animations - WD */
    ::animation=?
    ::animationDelay=?
    ::animationDirection=?
    ::anumationDuration=?
    ::animationFillMode=?
    ::animationIterationCount=?
    ::animationName=?
    ::animationPlayState=?
    ::animationTimingFunction=?
    /* Transitions - WD */
    ::transition=?
    ::transitionDelay=?
    ::transitionDuration=?
    ::transitionProperty=?
    ::transitionTimingFunction=?
    /* Transforms Level 1 - WD */
    ::backfaceVisibility=?
    ::perspective=?
    ::perspectiveOrigin=?
    ::transform=?
    ::transformOrigin=?
    ::transformStyle=?
    /* Box Alignment Level 3 - WD */
    /* alignContent - already defined by Flexible Box Layout */
    /* alignItems - already defined by Flexible Box Layout */
    ::justifyItems=?
    ::justifySelf=?
    ::placeContent=?
    ::placeItems=?
    ::placeSelf=?
    /* Basic User Interface Level 4 - FPWD */
    ::appearance=?
    ::caret=?
    ::caretAnimation=?
    ::caretShape=?
    ::userSelect=?
    /* Overflow Level 3 - WD */
    ::maxLines=?
    /* Basix Box Model - WD */
    ::marqueeDirection=?
    ::marqueeLoop=?
    ::marqueeSpeed=?
    ::marqueeStyle=?
    ::overflowStyle=?
    ::rotation=?
    ::rotationPoint=?
    /* svg */
    ::fill=?
    ::stroke=?
    ::strokeWidth=?
    ::strokeMiterlimit=?
    extra => (
  key,
  makeStyle
    ::?azimuth
    ::?background
    ::?backgroundAttachment
    ::?backgroundColor
    ::?backgroundImage
    ::?backgroundPosition
    ::?backgroundRepeat
    ::?border
    ::?borderCollapse
    ::?borderColor
    ::?borderSpacing
    ::?borderStyle
    ::?borderTop
    ::?borderRight
    ::?borderBottom
    ::?borderLeft
    ::?borderTopColor
    ::?borderRightColor
    ::?borderBottomColor
    ::?borderLeftColor
    ::?borderTopStyle
    ::?borderRightStyle
    ::?borderBottomStyle
    ::?borderLeftStyle
    ::?borderTopWidth
    ::?borderRightWidth
    ::?borderBottomWidth
    ::?borderLeftWidth
    ::?borderWidth
    ::?bottom
    ::?captionSide
    ::?clear
    ::?clip
    ::?color
    ::?content
    ::?counterIncrement
    ::?counterReset
    ::?cue
    ::?cueAfter
    ::?cueBefore
    ::?cursor
    ::?direction
    ::?display
    ::?elevation
    ::?emptyCells
    ::?cssFloat
    ::?font
    ::?fontFamily
    ::?fontSize
    ::?fontSizeAdjust
    ::?fontStretch
    ::?fontStyle
    ::?fontVariant
    ::?fontWeight
    ::?height
    ::?left
    ::?letterSpacing
    ::?lineHeight
    ::?listStyle
    ::?listStyleImage
    ::?listStylePosition
    ::?listStyleType
    ::?margin
    ::?marginTop
    ::?marginRight
    ::?marginBottom
    ::?marginLeft
    ::?markerOffset
    ::?marks
    ::?maxHeight
    ::?maxWidth
    ::?minHeight
    ::?minWidth
    ::?orphans
    ::?outline
    ::?outlineColor
    ::?outlineStyle
    ::?outlineWidth
    ::?overflow
    ::?padding
    ::?paddingTop
    ::?paddingRight
    ::?paddingBottom
    ::?paddingLeft
    ::?page
    ::?pageBreakAfter
    ::?pageBreakBefore
    ::?pageBreakInside
    ::?pause
    ::?pauseAfter
    ::?pauseBefore
    ::?pitch
    ::?pitchRange
    ::?playDuring
    ::?position
    ::?quotes
    ::?richness
    ::?right
    ::?size
    ::?speak
    ::?speakHeader
    ::?speakNumeral
    ::?speakPunctuation
    ::?speechRate
    ::?stress
    ::?tableLayout
    ::?textAlign
    ::?textDecoration
    ::?textIndent
    ::?textShadow
    ::?textTransform
    ::?top
    ::?unicodeBidi
    ::?verticalAlign
    ::?visibility
    ::?voiceFamily
    ::?volume
    ::?whiteSpace
    ::?widows
    ::?width
    ::?wordSpacing
    ::?zIndex
    /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
    /* Color Level 3 - REC */
    ::?opacity
    /* Backgrounds and Borders Level 3 - CR */
    /* backgroundRepeat - already defined by CSS2Properties */
    /* backgroundAttachment - already defined by CSS2Properties */
    ::?backgroundOrigin
    ::?backgroundSize
    ::?backgroundClip
    ::?borderRadius
    ::?borderTopLeftRadius
    ::?borderTopRightRadius
    ::?borderBottomLeftRadius
    ::?borderBottomRightRadius
    ::?borderImage
    ::?borderImageSource
    ::?borderImageSlice
    ::?borderImageWidth
    ::?borderImageOutset
    ::?borderImageRepeat
    ::?boxShadow
    /* Multi-column Layout - CR */
    ::?columns
    ::?columnCount
    ::?columnFill
    ::?columnGap
    ::?columnRule
    ::?columnRuleColor
    ::?columnRuleStyle
    ::?columnRuleWidth
    ::?columnSpan
    ::?columnWidth
    ::?breakAfter
    ::?breakBefore
    ::?breakInside
    /* Speech - CR */
    ::?rest
    ::?restAfter
    ::?restBefore
    ::?speakAs
    ::?voiceBalance
    ::?voiceDuration
    ::?voicePitch
    ::?voiceRange
    ::?voiceRate
    ::?voiceStress
    ::?voiceVolume
    /* Image Values and Replaced Content Level 3 - CR */
    ::?objectFit
    ::?objectPosition
    ::?imageResolution
    ::?imageOrientation
    /* Flexible Box Layout - CR */
    ::?alignContent
    ::?alignItems
    ::?alignSelf
    ::?flex
    ::?flexBasis
    ::?flexDirection
    ::?flexFlow
    ::?flexGrow
    ::?flexShrink
    ::?flexWrap
    ::?justifyContent
    ::?order
    /* Text Decoration Level 3 - CR */
    /* textDecoration - already defined by CSS2Properties */
    ::?textDecorationColor
    ::?textDecorationLine
    ::?textDecorationSkip
    ::?textDecorationStyle
    ::?textEmphasis
    ::?textEmphasisColor
    ::?textEmphasisPosition
    ::?textEmphasisStyle
    /* textShadow - already defined by CSS2Properties */
    ::?textUnderlinePosition
    /* Fonts Level 3 - CR */
    ::?fontFeatureSettings
    ::?fontKerning
    ::?fontLanguageOverride
    /* fontSizeAdjust - already defined by CSS2Properties */
    /* fontStretch - already defined by CSS2Properties */
    ::?fontSynthesis
    ::?forntVariantAlternates
    ::?fontVariantCaps
    ::?fontVariantEastAsian
    ::?fontVariantLigatures
    ::?fontVariantNumeric
    ::?fontVariantPosition
    /* Cascading and Inheritance Level 3 - CR */
    ::?all
    /* Writing Modes Level 3 - CR */
    ::?glyphOrientationVertical
    ::?textCombineUpright
    ::?textOrientation
    ::?writingMode
    /* Shapes Level 1 - CR */
    ::?shapeImageThreshold
    ::?shapeMargin
    ::?shapeOutside
    /* Masking Level 1 - CR */
    ::?clipPath
    ::?clipRule
    ::?mask
    ::?maskBorder
    ::?maskBorderMode
    ::?maskBorderOutset
    ::?maskBorderRepeat
    ::?maskBorderSlice
    ::?maskBorderSource
    ::?maskBorderWidth
    ::?maskClip
    ::?maskComposite
    ::?maskImage
    ::?maskMode
    ::?maskOrigin
    ::?maskPosition
    ::?maskRepeat
    ::?maskSize
    ::?maskType
    /* Compositing and Blending Level 1 - CR */
    ::?backgroundBlendMode
    ::?isolation
    ::?mixBlendMode
    /* Fragmentation Level 3 - CR */
    ::?boxDecorationBreak
    /* breakAfter - already defined by Multi-column Layout */
    /* breakBefore - already defined by Multi-column Layout */
    /* breakInside - already defined by Multi-column Layout */
    /* Basic User Interface Level 3 - CR */
    ::?boxSizing
    ::?caretColor
    ::?navDown
    ::?navLeft
    ::?navRight
    ::?navUp
    ::?outlineOffset
    ::?resize
    ::?textOverflow
    /* Grid Layout Level 1 - CR */
    ::?grid
    ::?gridArea
    ::?gridAutoColumns
    ::?gridAutoFlow
    ::?gridAutoRows
    ::?gridColumn
    ::?gridColumnEnd
    ::?gridColumnGap
    ::?gridColumnStart
    ::?gridGap
    ::?gridRow
    ::?gridRowEnd
    ::?gridRowGap
    ::?gridRowStart
    ::?gridTemplate
    ::?gridTempalteAreas
    ::?gridTemplateColumns
    ::?gridTemplateRows
    /* Will Change Level 1 - CR */
    ::?willChange
    /* Text Level 3 - LC */
    ::?hangingPunctuation
    ::?hyphens
    /* letterSpacing - already defined by CSS2Properties */
    ::?lineBreak
    ::?overflowWrap
    ::?tabSize
    /* textAlign - already defined by CSS2Properties */
    ::?textAlignLast
    ::?textJustify
    ::?wordBreak
    ::?wordWrap
    /* Animations - WD */
    ::?animation
    ::?animationDelay
    ::?animationDirection
    ::?anumationDuration
    ::?animationFillMode
    ::?animationIterationCount
    ::?animationName
    ::?animationPlayState
    ::?animationTimingFunction
    /* Transitions - WD */
    ::?transition
    ::?transitionDelay
    ::?transitionDuration
    ::?transitionProperty
    ::?transitionTimingFunction
    /* Transforms Level 1 - WD */
    ::?backfaceVisibility
    ::?perspective
    ::?perspectiveOrigin
    ::?transform
    ::?transformOrigin
    ::?transformStyle
    /* Box Alignment Level 3 - WD */
    /* alignContent - already defined by Flexible Box Layout */
    /* alignItems - already defined by Flexible Box Layout */
    ::?justifyItems
    ::?justifySelf
    ::?placeContent
    ::?placeItems
    ::?placeSelf
    /* Basic User Interface Level 4 - FPWD */
    ::?appearance
    ::?caret
    ::?caretAnimation
    ::?caretShape
    ::?userSelect
    /* Overflow Level 3 - WD */
    ::?maxLines
    /* Basix Box Model - WD */
    ::?marqueeDirection
    ::?marqueeLoop
    ::?marqueeSpeed
    ::?marqueeStyle
    ::?overflowStyle
    ::?rotation
    ::?rotationPoint
    /* svg */
    ::?fill
    ::?stroke
    ::?strokeWidth
    ::?strokeMiterlimit
    extra
);

let css
    ::azimuth=?
    ::background=?
    ::backgroundAttachment=?
    ::backgroundColor=?
    ::backgroundImage=?
    ::backgroundPosition=?
    ::backgroundRepeat=?
    ::border=?
    ::borderCollapse=?
    ::borderColor=?
    ::borderSpacing=?
    ::borderStyle=?
    ::borderTop=?
    ::borderRight=?
    ::borderBottom=?
    ::borderLeft=?
    ::borderTopColor=?
    ::borderRightColor=?
    ::borderBottomColor=?
    ::borderLeftColor=?
    ::borderTopStyle=?
    ::borderRightStyle=?
    ::borderBottomStyle=?
    ::borderLeftStyle=?
    ::borderTopWidth=?
    ::borderRightWidth=?
    ::borderBottomWidth=?
    ::borderLeftWidth=?
    ::borderWidth=?
    ::bottom=?
    ::captionSide=?
    ::clear=?
    ::clip=?
    ::color=?
    ::content=?
    ::counterIncrement=?
    ::counterReset=?
    ::cue=?
    ::cueAfter=?
    ::cueBefore=?
    ::cursor=?
    ::direction=?
    ::display=?
    ::elevation=?
    ::emptyCells=?
    ::cssFloat=?
    ::font=?
    ::fontFamily=?
    ::fontSize=?
    ::fontSizeAdjust=?
    ::fontStretch=?
    ::fontStyle=?
    ::fontVariant=?
    ::fontWeight=?
    ::height=?
    ::left=?
    ::letterSpacing=?
    ::lineHeight=?
    ::listStyle=?
    ::listStyleImage=?
    ::listStylePosition=?
    ::listStyleType=?
    ::margin=?
    ::marginTop=?
    ::marginRight=?
    ::marginBottom=?
    ::marginLeft=?
    ::markerOffset=?
    ::marks=?
    ::maxHeight=?
    ::maxWidth=?
    ::minHeight=?
    ::minWidth=?
    ::orphans=?
    ::outline=?
    ::outlineColor=?
    ::outlineStyle=?
    ::outlineWidth=?
    ::overflow=?
    ::padding=?
    ::paddingTop=?
    ::paddingRight=?
    ::paddingBottom=?
    ::paddingLeft=?
    ::page=?
    ::pageBreakAfter=?
    ::pageBreakBefore=?
    ::pageBreakInside=?
    ::pause=?
    ::pauseAfter=?
    ::pauseBefore=?
    ::pitch=?
    ::pitchRange=?
    ::playDuring=?
    ::position=?
    ::quotes=?
    ::richness=?
    ::right=?
    ::size=?
    ::speak=?
    ::speakHeader=?
    ::speakNumeral=?
    ::speakPunctuation=?
    ::speechRate=?
    ::stress=?
    ::tableLayout=?
    ::textAlign=?
    ::textDecoration=?
    ::textIndent=?
    ::textShadow=?
    ::textTransform=?
    ::top=?
    ::unicodeBidi=?
    ::verticalAlign=?
    ::visibility=?
    ::voiceFamily=?
    ::volume=?
    ::whiteSpace=?
    ::widows=?
    ::width=?
    ::wordSpacing=?
    ::zIndex=?
    /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
    /* Color Level 3 - REC */
    ::opacity=?
    /* Backgrounds and Borders Level 3 - CR */
    /* backgroundRepeat - already defined by CSS2Properties */
    /* backgroundAttachment - already defined by CSS2Properties */
    ::backgroundOrigin=?
    ::backgroundSize=?
    ::backgroundClip=?
    ::borderRadius=?
    ::borderTopLeftRadius=?
    ::borderTopRightRadius=?
    ::borderBottomLeftRadius=?
    ::borderBottomRightRadius=?
    ::borderImage=?
    ::borderImageSource=?
    ::borderImageSlice=?
    ::borderImageWidth=?
    ::borderImageOutset=?
    ::borderImageRepeat=?
    ::boxShadow=?
    /* Multi-column Layout - CR */
    ::columns=?
    ::columnCount=?
    ::columnFill=?
    ::columnGap=?
    ::columnRule=?
    ::columnRuleColor=?
    ::columnRuleStyle=?
    ::columnRuleWidth=?
    ::columnSpan=?
    ::columnWidth=?
    ::breakAfter=?
    ::breakBefore=?
    ::breakInside=?
    /* Speech - CR */
    ::rest=?
    ::restAfter=?
    ::restBefore=?
    ::speakAs=?
    ::voiceBalance=?
    ::voiceDuration=?
    ::voicePitch=?
    ::voiceRange=?
    ::voiceRate=?
    ::voiceStress=?
    ::voiceVolume=?
    /* Image Values and Replaced Content Level 3 - CR */
    ::objectFit=?
    ::objectPosition=?
    ::imageResolution=?
    ::imageOrientation=?
    /* Flexible Box Layout - CR */
    ::alignContent=?
    ::alignItems=?
    ::alignSelf=?
    ::flex=?
    ::flexBasis=?
    ::flexDirection=?
    ::flexFlow=?
    ::flexGrow=?
    ::flexShrink=?
    ::flexWrap=?
    ::justifyContent=?
    ::order=?
    /* Text Decoration Level 3 - CR */
    /* textDecoration - already defined by CSS2Properties */
    ::textDecorationColor=?
    ::textDecorationLine=?
    ::textDecorationSkip=?
    ::textDecorationStyle=?
    ::textEmphasis=?
    ::textEmphasisColor=?
    ::textEmphasisPosition=?
    ::textEmphasisStyle=?
    /* textShadow - already defined by CSS2Properties */
    ::textUnderlinePosition=?
    /* Fonts Level 3 - CR */
    ::fontFeatureSettings=?
    ::fontKerning=?
    ::fontLanguageOverride=?
    /* fontSizeAdjust - already defined by CSS2Properties */
    /* fontStretch - already defined by CSS2Properties */
    ::fontSynthesis=?
    ::forntVariantAlternates=?
    ::fontVariantCaps=?
    ::fontVariantEastAsian=?
    ::fontVariantLigatures=?
    ::fontVariantNumeric=?
    ::fontVariantPosition=?
    /* Cascading and Inheritance Level 3 - CR */
    ::all=?
    /* Writing Modes Level 3 - CR */
    ::glyphOrientationVertical=?
    ::textCombineUpright=?
    ::textOrientation=?
    ::writingMode=?
    /* Shapes Level 1 - CR */
    ::shapeImageThreshold=?
    ::shapeMargin=?
    ::shapeOutside=?
    /* Masking Level 1 - CR */
    ::clipPath=?
    ::clipRule=?
    ::mask=?
    ::maskBorder=?
    ::maskBorderMode=?
    ::maskBorderOutset=?
    ::maskBorderRepeat=?
    ::maskBorderSlice=?
    ::maskBorderSource=?
    ::maskBorderWidth=?
    ::maskClip=?
    ::maskComposite=?
    ::maskImage=?
    ::maskMode=?
    ::maskOrigin=?
    ::maskPosition=?
    ::maskRepeat=?
    ::maskSize=?
    ::maskType=?
    /* Compositing and Blending Level 1 - CR */
    ::backgroundBlendMode=?
    ::isolation=?
    ::mixBlendMode=?
    /* Fragmentation Level 3 - CR */
    ::boxDecorationBreak=?
    /* breakAfter - already defined by Multi-column Layout */
    /* breakBefore - already defined by Multi-column Layout */
    /* breakInside - already defined by Multi-column Layout */
    /* Basic User Interface Level 3 - CR */
    ::boxSizing=?
    ::caretColor=?
    ::navDown=?
    ::navLeft=?
    ::navRight=?
    ::navUp=?
    ::outlineOffset=?
    ::resize=?
    ::textOverflow=?
    /* Grid Layout Level 1 - CR */
    ::grid=?
    ::gridArea=?
    ::gridAutoColumns=?
    ::gridAutoFlow=?
    ::gridAutoRows=?
    ::gridColumn=?
    ::gridColumnEnd=?
    ::gridColumnGap=?
    ::gridColumnStart=?
    ::gridGap=?
    ::gridRow=?
    ::gridRowEnd=?
    ::gridRowGap=?
    ::gridRowStart=?
    ::gridTemplate=?
    ::gridTempalteAreas=?
    ::gridTemplateColumns=?
    ::gridTemplateRows=?
    /* Will Change Level 1 - CR */
    ::willChange=?
    /* Text Level 3 - LC */
    ::hangingPunctuation=?
    ::hyphens=?
    /* letterSpacing - already defined by CSS2Properties */
    ::lineBreak=?
    ::overflowWrap=?
    ::tabSize=?
    /* textAlign - already defined by CSS2Properties */
    ::textAlignLast=?
    ::textJustify=?
    ::wordBreak=?
    ::wordWrap=?
    /* Animations - WD */
    ::animation=?
    ::animationDelay=?
    ::animationDirection=?
    ::anumationDuration=?
    ::animationFillMode=?
    ::animationIterationCount=?
    ::animationName=?
    ::animationPlayState=?
    ::animationTimingFunction=?
    /* Transitions - WD */
    ::transition=?
    ::transitionDelay=?
    ::transitionDuration=?
    ::transitionProperty=?
    ::transitionTimingFunction=?
    /* Transforms Level 1 - WD */
    ::backfaceVisibility=?
    ::perspective=?
    ::perspectiveOrigin=?
    ::transform=?
    ::transformOrigin=?
    ::transformStyle=?
    /* Box Alignment Level 3 - WD */
    /* alignContent - already defined by Flexible Box Layout */
    /* alignItems - already defined by Flexible Box Layout */
    ::justifyItems=?
    ::justifySelf=?
    ::placeContent=?
    ::placeItems=?
    ::placeSelf=?
    /* Basic User Interface Level 4 - FPWD */
    ::appearance=?
    ::caret=?
    ::caretAnimation=?
    ::caretShape=?
    ::userSelect=?
    /* Overflow Level 3 - WD */
    ::maxLines=?
    /* Basix Box Model - WD */
    ::marqueeDirection=?
    ::marqueeLoop=?
    ::marqueeSpeed=?
    ::marqueeStyle=?
    ::overflowStyle=?
    ::rotation=?
    ::rotationPoint=?
    /* svg */
    ::fill=?
    ::stroke=?
    ::strokeWidth=?
    ::strokeMiterlimit=?
    extra =>
  makeCSS (
    makeStyle
      ::?azimuth
      ::?background
      ::?backgroundAttachment
      ::?backgroundColor
      ::?backgroundImage
      ::?backgroundPosition
      ::?backgroundRepeat
      ::?border
      ::?borderCollapse
      ::?borderColor
      ::?borderSpacing
      ::?borderStyle
      ::?borderTop
      ::?borderRight
      ::?borderBottom
      ::?borderLeft
      ::?borderTopColor
      ::?borderRightColor
      ::?borderBottomColor
      ::?borderLeftColor
      ::?borderTopStyle
      ::?borderRightStyle
      ::?borderBottomStyle
      ::?borderLeftStyle
      ::?borderTopWidth
      ::?borderRightWidth
      ::?borderBottomWidth
      ::?borderLeftWidth
      ::?borderWidth
      ::?bottom
      ::?captionSide
      ::?clear
      ::?clip
      ::?color
      ::?content
      ::?counterIncrement
      ::?counterReset
      ::?cue
      ::?cueAfter
      ::?cueBefore
      ::?cursor
      ::?direction
      ::?display
      ::?elevation
      ::?emptyCells
      ::?cssFloat
      ::?font
      ::?fontFamily
      ::?fontSize
      ::?fontSizeAdjust
      ::?fontStretch
      ::?fontStyle
      ::?fontVariant
      ::?fontWeight
      ::?height
      ::?left
      ::?letterSpacing
      ::?lineHeight
      ::?listStyle
      ::?listStyleImage
      ::?listStylePosition
      ::?listStyleType
      ::?margin
      ::?marginTop
      ::?marginRight
      ::?marginBottom
      ::?marginLeft
      ::?markerOffset
      ::?marks
      ::?maxHeight
      ::?maxWidth
      ::?minHeight
      ::?minWidth
      ::?orphans
      ::?outline
      ::?outlineColor
      ::?outlineStyle
      ::?outlineWidth
      ::?overflow
      ::?padding
      ::?paddingTop
      ::?paddingRight
      ::?paddingBottom
      ::?paddingLeft
      ::?page
      ::?pageBreakAfter
      ::?pageBreakBefore
      ::?pageBreakInside
      ::?pause
      ::?pauseAfter
      ::?pauseBefore
      ::?pitch
      ::?pitchRange
      ::?playDuring
      ::?position
      ::?quotes
      ::?richness
      ::?right
      ::?size
      ::?speak
      ::?speakHeader
      ::?speakNumeral
      ::?speakPunctuation
      ::?speechRate
      ::?stress
      ::?tableLayout
      ::?textAlign
      ::?textDecoration
      ::?textIndent
      ::?textShadow
      ::?textTransform
      ::?top
      ::?unicodeBidi
      ::?verticalAlign
      ::?visibility
      ::?voiceFamily
      ::?volume
      ::?whiteSpace
      ::?widows
      ::?width
      ::?wordSpacing
      ::?zIndex
      /* Below properties based on https://www.w3.org/Style/CSS/all-properties */
      /* Color Level 3 - REC */
      ::?opacity
      /* Backgrounds and Borders Level 3 - CR */
      /* backgroundRepeat - already defined by CSS2Properties */
      /* backgroundAttachment - already defined by CSS2Properties */
      ::?backgroundOrigin
      ::?backgroundSize
      ::?backgroundClip
      ::?borderRadius
      ::?borderTopLeftRadius
      ::?borderTopRightRadius
      ::?borderBottomLeftRadius
      ::?borderBottomRightRadius
      ::?borderImage
      ::?borderImageSource
      ::?borderImageSlice
      ::?borderImageWidth
      ::?borderImageOutset
      ::?borderImageRepeat
      ::?boxShadow
      /* Multi-column Layout - CR */
      ::?columns
      ::?columnCount
      ::?columnFill
      ::?columnGap
      ::?columnRule
      ::?columnRuleColor
      ::?columnRuleStyle
      ::?columnRuleWidth
      ::?columnSpan
      ::?columnWidth
      ::?breakAfter
      ::?breakBefore
      ::?breakInside
      /* Speech - CR */
      ::?rest
      ::?restAfter
      ::?restBefore
      ::?speakAs
      ::?voiceBalance
      ::?voiceDuration
      ::?voicePitch
      ::?voiceRange
      ::?voiceRate
      ::?voiceStress
      ::?voiceVolume
      /* Image Values and Replaced Content Level 3 - CR */
      ::?objectFit
      ::?objectPosition
      ::?imageResolution
      ::?imageOrientation
      /* Flexible Box Layout - CR */
      ::?alignContent
      ::?alignItems
      ::?alignSelf
      ::?flex
      ::?flexBasis
      ::?flexDirection
      ::?flexFlow
      ::?flexGrow
      ::?flexShrink
      ::?flexWrap
      ::?justifyContent
      ::?order
      /* Text Decoration Level 3 - CR */
      /* textDecoration - already defined by CSS2Properties */
      ::?textDecorationColor
      ::?textDecorationLine
      ::?textDecorationSkip
      ::?textDecorationStyle
      ::?textEmphasis
      ::?textEmphasisColor
      ::?textEmphasisPosition
      ::?textEmphasisStyle
      /* textShadow - already defined by CSS2Properties */
      ::?textUnderlinePosition
      /* Fonts Level 3 - CR */
      ::?fontFeatureSettings
      ::?fontKerning
      ::?fontLanguageOverride
      /* fontSizeAdjust - already defined by CSS2Properties */
      /* fontStretch - already defined by CSS2Properties */
      ::?fontSynthesis
      ::?forntVariantAlternates
      ::?fontVariantCaps
      ::?fontVariantEastAsian
      ::?fontVariantLigatures
      ::?fontVariantNumeric
      ::?fontVariantPosition
      /* Cascading and Inheritance Level 3 - CR */
      ::?all
      /* Writing Modes Level 3 - CR */
      ::?glyphOrientationVertical
      ::?textCombineUpright
      ::?textOrientation
      ::?writingMode
      /* Shapes Level 1 - CR */
      ::?shapeImageThreshold
      ::?shapeMargin
      ::?shapeOutside
      /* Masking Level 1 - CR */
      ::?clipPath
      ::?clipRule
      ::?mask
      ::?maskBorder
      ::?maskBorderMode
      ::?maskBorderOutset
      ::?maskBorderRepeat
      ::?maskBorderSlice
      ::?maskBorderSource
      ::?maskBorderWidth
      ::?maskClip
      ::?maskComposite
      ::?maskImage
      ::?maskMode
      ::?maskOrigin
      ::?maskPosition
      ::?maskRepeat
      ::?maskSize
      ::?maskType
      /* Compositing and Blending Level 1 - CR */
      ::?backgroundBlendMode
      ::?isolation
      ::?mixBlendMode
      /* Fragmentation Level 3 - CR */
      ::?boxDecorationBreak
      /* breakAfter - already defined by Multi-column Layout */
      /* breakBefore - already defined by Multi-column Layout */
      /* breakInside - already defined by Multi-column Layout */
      /* Basic User Interface Level 3 - CR */
      ::?boxSizing
      ::?caretColor
      ::?navDown
      ::?navLeft
      ::?navRight
      ::?navUp
      ::?outlineOffset
      ::?resize
      ::?textOverflow
      /* Grid Layout Level 1 - CR */
      ::?grid
      ::?gridArea
      ::?gridAutoColumns
      ::?gridAutoFlow
      ::?gridAutoRows
      ::?gridColumn
      ::?gridColumnEnd
      ::?gridColumnGap
      ::?gridColumnStart
      ::?gridGap
      ::?gridRow
      ::?gridRowEnd
      ::?gridRowGap
      ::?gridRowStart
      ::?gridTemplate
      ::?gridTempalteAreas
      ::?gridTemplateColumns
      ::?gridTemplateRows
      /* Will Change Level 1 - CR */
      ::?willChange
      /* Text Level 3 - LC */
      ::?hangingPunctuation
      ::?hyphens
      /* letterSpacing - already defined by CSS2Properties */
      ::?lineBreak
      ::?overflowWrap
      ::?tabSize
      /* textAlign - already defined by CSS2Properties */
      ::?textAlignLast
      ::?textJustify
      ::?wordBreak
      ::?wordWrap
      /* Animations - WD */
      ::?animation
      ::?animationDelay
      ::?animationDirection
      ::?anumationDuration
      ::?animationFillMode
      ::?animationIterationCount
      ::?animationName
      ::?animationPlayState
      ::?animationTimingFunction
      /* Transitions - WD */
      ::?transition
      ::?transitionDelay
      ::?transitionDuration
      ::?transitionProperty
      ::?transitionTimingFunction
      /* Transforms Level 1 - WD */
      ::?backfaceVisibility
      ::?perspective
      ::?perspectiveOrigin
      ::?transform
      ::?transformOrigin
      ::?transformStyle
      /* Box Alignment Level 3 - WD */
      /* alignContent - already defined by Flexible Box Layout */
      /* alignItems - already defined by Flexible Box Layout */
      ::?justifyItems
      ::?justifySelf
      ::?placeContent
      ::?placeItems
      ::?placeSelf
      /* Basic User Interface Level 4 - FPWD */
      ::?appearance
      ::?caret
      ::?caretAnimation
      ::?caretShape
      ::?userSelect
      /* Overflow Level 3 - WD */
      ::?maxLines
      /* Basix Box Model - WD */
      ::?marqueeDirection
      ::?marqueeLoop
      ::?marqueeSpeed
      ::?marqueeStyle
      ::?overflowStyle
      ::?rotation
      ::?rotationPoint
      /* svg */
      ::?fill
      ::?stroke
      ::?strokeWidth
      ::?strokeMiterlimit
      extra
  );
