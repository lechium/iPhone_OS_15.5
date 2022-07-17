//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AEAssessmentStateReading;

@interface AEAssessmentModeGestalt : NSObject
{
    NSObject<AEAssessmentStateReading> *_assessmentStateReader;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingActive;	// IMP=0x0000000000009e30
+ (id)makeAssessmentStateReaderWithQueue:(id)arg1;	// IMP=0x0000000000009dbc
- (void).cxx_destruct;	// IMP=0x0000000000009e9e
@property(readonly, nonatomic) NSObject<AEAssessmentStateReading> *assessmentStateReader; // @synthesize assessmentStateReader=_assessmentStateReader;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)init;	// IMP=0x0000000000009d8c
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000009d0a

@end
