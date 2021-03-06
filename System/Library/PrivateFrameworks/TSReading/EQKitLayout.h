//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayout-Protocol.h>

@class EQKitBox, EQKitEnvironmentInstance, NSString;
@protocol EQKitRootNode;

@interface EQKitLayout : NSObject <EQKitLayout>
{
    id <EQKitRootNode> mRoot;	// 8 = 0x8
    EQKitBox *mBox;	// 16 = 0x10
    double mAscent;	// 24 = 0x18
    double mDescent;	// 32 = 0x20
    double mLeading;	// 40 = 0x28
    double mNaturalAlignmentOffset;	// 48 = 0x30
    double mScale;	// 56 = 0x38
    _Bool mSingleLineHeight;	// 64 = 0x40
    EQKitEnvironmentInstance *mEnvironment;	// 72 = 0x48
}

@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
@property(readonly, copy) NSString *description;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000011024
- (struct CGRect)erasableBounds;	// IMP=0x0000000000010f80
- (double)naturalAlignmentOffset;	// IMP=0x0000000000010f70
- (double)vsize;	// IMP=0x0000000000010f31
- (double)width;	// IMP=0x0000000000010f0b
- (double)depth;	// IMP=0x0000000000010eb3
- (double)height;	// IMP=0x0000000000010e5b
- (_Bool)layoutWithContext:(id)arg1;	// IMP=0x0000000000010bb0
- (void)dealloc;	// IMP=0x0000000000010b5f
- (id)initWithRoot:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000010af6
- (id)init;	// IMP=0x0000000000010ae0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

