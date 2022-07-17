//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTextBodyAutoFit, OADTextWarp;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties
{
    OADTextBodyAutoFit *mAutoFit;	// 24 = 0x18
    OADTextWarp *mTextWarp;	// 32 = 0x20
    float mTopInset;	// 40 = 0x28
    float mLeftInset;	// 44 = 0x2c
    float mBottomInset;	// 48 = 0x30
    float mRightInset;	// 52 = 0x34
    float mRotation;	// 56 = 0x38
    float mColumnSpacing;	// 60 = 0x3c
    unsigned short mColumnCount;	// 64 = 0x40
    unsigned short mTextBodyId;	// 66 = 0x42
    unsigned char mTextAnchorType;	// 68 = 0x44
    unsigned char mFlowType;	// 69 = 0x45
    unsigned char mWrapType;	// 70 = 0x46
    unsigned char mVerticalOverflowType;	// 71 = 0x47
    unsigned char mHorizontalOverflowType;	// 72 = 0x48
    unsigned int mRepectFirstLastParagraphSpacing:1;	// 73 = 0x49
    unsigned int mIsUpright:1;	// 73 = 0x49
    unsigned int mIsAnchorCenter:1;	// 73 = 0x49
    unsigned int mIsLeftToRightColumns:1;	// 73 = 0x49
    unsigned int mHasVerticalOverflowType:1;	// 73 = 0x49
    unsigned int mHasHorizontalOverflowType:1;	// 73 = 0x49
    unsigned int mHasTextBodyId:1;	// 73 = 0x49
    unsigned int mHasFlowType:1;	// 73 = 0x49
    unsigned int mHasWrapType:1;	// 74 = 0x4a
    unsigned int mHasTextAnchorType:1;	// 74 = 0x4a
    unsigned int mHasIsAnchorCenter:1;	// 74 = 0x4a
    unsigned int mHasIsUpright:1;	// 74 = 0x4a
    unsigned int mHasRotation:1;	// 74 = 0x4a
    unsigned int mHasColumnCount:1;	// 74 = 0x4a
    unsigned int mHasColumnSpacing:1;	// 74 = 0x4a
    unsigned int mHasIsLeftToRightColumns:1;	// 74 = 0x4a
    unsigned int mHasRepectFirstLastParagraphSpacing:1;	// 75 = 0x4b
    unsigned int mHasTopInset:1;	// 75 = 0x4b
    unsigned int mHasLeftInset:1;	// 75 = 0x4b
    unsigned int mHasRightInset:1;	// 75 = 0x4b
    unsigned int mHasBottomInset:1;	// 75 = 0x4b
}

+ (id)defaultEscherWordArtProperties;	// IMP=0x0000000000155bd7
+ (id)defaultProperties;	// IMP=0x00000000000204d0
- (void).cxx_destruct;	// IMP=0x000000000032fda8
- (id)description;	// IMP=0x000000000032fd6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032f447
- (unsigned long long)hash;	// IMP=0x000000000032f22d
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002fb6a
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000032e569
- (void)setRotation:(float)arg1;	// IMP=0x00000000000209aa
- (float)rotation;	// IMP=0x0000000000030e09
- (_Bool)hasRotation;	// IMP=0x0000000000030de3
- (void)setIsUpright:(_Bool)arg1;	// IMP=0x0000000000020982
- (_Bool)isUpright;	// IMP=0x0000000000030d9f
- (_Bool)hasIsUpright;	// IMP=0x0000000000030d79
- (void)setTextAnchorType:(unsigned char)arg1;	// IMP=0x0000000000020966
- (unsigned char)textAnchorType;	// IMP=0x0000000000030d37
- (_Bool)hasTextAnchorType;	// IMP=0x0000000000030d11
- (void)setIsAnchorCenter:(_Bool)arg1;	// IMP=0x000000000002093f
- (_Bool)isAnchorCenter;	// IMP=0x0000000000030ccb
- (_Bool)hasIsAnchorCenter;	// IMP=0x0000000000030ca5
- (_Bool)isWarped;	// IMP=0x000000000032e288
- (void)setTextWarp:(id)arg1;	// IMP=0x0000000000020928
- (id)textWarp;	// IMP=0x000000000015632e
- (_Bool)hasTextWarp;	// IMP=0x0000000000030c7b
- (void)setTextBodyId:(int)arg1;	// IMP=0x000000000032e26b
- (int)textBodyId;	// IMP=0x000000000032e25a
- (_Bool)hasTextBodyId;	// IMP=0x0000000000030c65
- (void)setHorizontalOverflowType:(unsigned char)arg1;	// IMP=0x000000000002090a
- (unsigned char)horizontalOverflowType;	// IMP=0x000000000032e21b
- (_Bool)hasHorizontalOverflowType;	// IMP=0x000000000032e1f5
- (void)setVerticalOverflowType:(unsigned char)arg1;	// IMP=0x00000000000208ee
- (unsigned char)verticalOverflowType;	// IMP=0x0000000000030c23
- (_Bool)hasVerticalOverflowType;	// IMP=0x0000000000030bfd
- (void)setWrapType:(unsigned char)arg1;	// IMP=0x00000000000208d2
- (unsigned char)wrapType;	// IMP=0x0000000000030bbb
- (_Bool)hasWrapType;	// IMP=0x0000000000030b95
- (void)setFlowType:(unsigned char)arg1;	// IMP=0x00000000000208b6
- (unsigned char)flowType;	// IMP=0x0000000000030b53
- (_Bool)hasFlowType;	// IMP=0x0000000000030b2d
- (void)setAutoFit:(id)arg1;	// IMP=0x00000000000208a1
- (id)autoFit;	// IMP=0x0000000000030a5b
- (_Bool)hasAutoFit;	// IMP=0x0000000000030a34
- (void)setIsLeftToRightColumns:(_Bool)arg1;	// IMP=0x000000000002083e
- (_Bool)isLeftToRightColumns;	// IMP=0x00000000000309ee
- (_Bool)hasIsLeftToRightColumns;	// IMP=0x00000000000309c8
- (void)setColumnSpacing:(float)arg1;	// IMP=0x000000000002081f
- (float)columnSpacing;	// IMP=0x000000000003097e
- (_Bool)hasColumnSpacing;	// IMP=0x0000000000030958
- (void)setColumnCount:(int)arg1;	// IMP=0x0000000000020800
- (int)columnCount;	// IMP=0x0000000000030919
- (_Bool)hasColumnCount;	// IMP=0x00000000000308f3
- (void)setRightInset:(float)arg1;	// IMP=0x00000000000207e2
- (float)rightInset;	// IMP=0x0000000000030835
- (void)setBottomInset:(float)arg1;	// IMP=0x00000000000207c4
- (float)bottomInset;	// IMP=0x00000000000308a7
- (void)setLeftInset:(float)arg1;	// IMP=0x00000000000207a6
- (float)leftInset;	// IMP=0x00000000000307c5
- (void)setTopInset:(float)arg1;	// IMP=0x0000000000020788
- (float)topInset;	// IMP=0x0000000000030753
- (_Bool)hasBottomInset;	// IMP=0x0000000000030881
- (_Bool)hasRightInset;	// IMP=0x000000000003080f
- (_Bool)hasLeftInset;	// IMP=0x000000000003079d
- (_Bool)hasTopInset;	// IMP=0x000000000003072b
- (void)setRespectLastFirstLineSpacing:(_Bool)arg1;	// IMP=0x0000000000020764
- (_Bool)respectLastFirstLineSpacing;	// IMP=0x000000000032e1b3
- (_Bool)hasRespectLastFirstLineSpacing;	// IMP=0x0000000000030705
- (id)initWithDefaults;	// IMP=0x0000000000020503
- (id)init;	// IMP=0x00000000000204a0

@end
