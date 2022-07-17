//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject
{
    NSString *mName;	// 8 = 0x8
    NSMutableArray *mFills;	// 16 = 0x10
    NSMutableArray *mStrokes;	// 24 = 0x18
    NSMutableArray *mEffects;	// 32 = 0x20
    NSMutableArray *mBgFills;	// 40 = 0x28
}

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3;	// IMP=0x0000000000196e0c
- (void).cxx_destruct;	// IMP=0x0000000000325137
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (id)description;	// IMP=0x00000000003250e0
- (_Bool)isEmpty;	// IMP=0x000000000032507d
- (void)validateStyleMatrix;	// IMP=0x0000000000324e6e
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;	// IMP=0x0000000000324d67
- (id)bgFillAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cb323
- (unsigned long long)bgFillCount;	// IMP=0x0000000000324d51
- (void)addBgFill:(id)arg1;	// IMP=0x0000000000028956
- (id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x0000000000324c7e
- (id)effectsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000197646
- (unsigned long long)effectsCount;	// IMP=0x0000000000324c68
- (void)addEffects:(id)arg1;	// IMP=0x000000000002893f
- (id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x0000000000324bb0
- (id)strokeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000196c48
- (unsigned long long)strokeCount;	// IMP=0x0000000000324b9a
- (void)addStroke:(id)arg1;	// IMP=0x0000000000028369
- (id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x0000000000324ae2
- (id)fillAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001971fc
- (unsigned long long)fillCount;	// IMP=0x0000000000324acc
- (void)addFill:(id)arg1;	// IMP=0x0000000000026e72
- (id)init;	// IMP=0x000000000001ed63

@end
