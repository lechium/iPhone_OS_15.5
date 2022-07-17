//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TIDeleteWordEvent
{
    NSMutableArray *_allKeyboardInputsM;	// 56 = 0x38
    NSMutableArray *_allTouchesM;	// 64 = 0x40
    NSMutableArray *_candidatesOfferedM;	// 72 = 0x48
    NSMutableArray *_touchLayoutsM;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001bed7f
- (void).cxx_destruct;	// IMP=0x00000000001bed2c
@property(retain, nonatomic) NSMutableArray *touchLayoutsM; // @synthesize touchLayoutsM=_touchLayoutsM;
@property(retain, nonatomic) NSMutableArray *candidatesOfferedM; // @synthesize candidatesOfferedM=_candidatesOfferedM;
@property(retain, nonatomic) NSMutableArray *allTouchesM; // @synthesize allTouchesM=_allTouchesM;
@property(retain, nonatomic) NSMutableArray *allKeyboardInputsM; // @synthesize allKeyboardInputsM=_allKeyboardInputsM;
@property(readonly, nonatomic) NSArray *touchLayouts;
@property(readonly, nonatomic) NSArray *candidatesOffered;
@property(readonly, nonatomic) NSArray *allTouches;
@property(readonly, nonatomic) NSArray *allKeyboardInputs;
- (void)addTouches:(id)arg1 withLayoutIDs:(id)arg2;	// IMP=0x00000000001beabc
- (void)addCandidatesOffered:(id)arg1;	// IMP=0x00000000001bea4a
- (void)addKeyInputs:(id)arg1;	// IMP=0x00000000001be9d8
- (void)addKeyInput:(id)arg1;	// IMP=0x00000000001be966
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001be891
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be5f5
- (id)initWithTIKeyboardState:(id)arg1;	// IMP=0x00000000001be4e6

@end
