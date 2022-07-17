//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPModel-Protocol.h>

@class NSArray, NSIndexSet, NSString;
@protocol _CDPDataHarvester;

@interface _CDPSimpleModel : NSObject <_CDPModel>
{
    _Bool _loaded;	// 8 = 0x8
    _Bool _scoresAreDirty;	// 9 = 0x9
    unsigned long long _NEmail;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    unsigned long long _NPeople;	// 32 = 0x20
    double *_timestamp;	// 40 = 0x28
    _Bool *_userIsSender;	// 48 = 0x30
    _Bool *_userIsThreadInitiator;	// 56 = 0x38
    unsigned int **_email;	// 64 = 0x40
    unsigned long long *_emailLength;	// 72 = 0x48
    float *_email2LogScore;	// 80 = 0x50
    unsigned int **_people2Email;	// 88 = 0x58
    unsigned long long *_people2EmailLength;	// 96 = 0x60
    NSArray *_people;	// 104 = 0x68
    NSIndexSet *_testingIndices;	// 112 = 0x70
    _Bool _requireOutgoingInteraction;	// 120 = 0x78
    float _lambda;	// 124 = 0x7c
    float _w0;	// 128 = 0x80
    id <_CDPDataHarvester> _harvester;	// 136 = 0x88
}

+ (int)maxNumberOfEmailsSupported;	// IMP=0x0000000000064469
- (void).cxx_destruct;	// IMP=0x00000000000644c0
@property(nonatomic) _Bool requireOutgoingInteraction; // @synthesize requireOutgoingInteraction=_requireOutgoingInteraction;
@property(readonly, nonatomic) float w0; // @synthesize w0=_w0;
@property(readonly, nonatomic) float lambda; // @synthesize lambda=_lambda;
@property(retain, nonatomic) id <_CDPDataHarvester> harvester; // @synthesize harvester=_harvester;
@property(readonly, nonatomic) NSArray *people;
- (id)peopleWithID:(unsigned int)arg1;	// IMP=0x0000000000064443
- (void)_printPrediction:(struct _cdp_prediction_result *)arg1;	// IMP=0x0000000000064345
- (void)_printUserWithID:(unsigned long long)arg1;	// IMP=0x00000000000642f4
- (void)_printUsers:(unsigned int *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000064252
- (void)_printEmailWithID:(unsigned long long)arg1;	// IMP=0x0000000000064162
@property(readonly, nonatomic) unsigned long long nEmail;
@property(readonly, nonatomic) unsigned long long nPeople;
- (void)getEmail:(unsigned int **)arg1 emailLength:(unsigned long long *)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000064132
- (id)_testingIndices;	// IMP=0x000000000006404c
- (void)makePredictionForGroup:(id)arg1 clientType:(long long)arg2 limit:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063e0e
- (struct _cdp_prediction_result *)_newPredictionResultWithSeed:(unsigned int *)arg1 seedLength:(unsigned long long)arg2 realSeedLength:(unsigned long long)arg3 maxTrainingEmailID:(unsigned int)arg4;	// IMP=0x00000000000637d2
- (void)setLambda:(float)arg1 w0:(float)arg2;	// IMP=0x00000000000637bb
- (unsigned int *)_newIdsForPeople:(id)arg1 length:(unsigned long long *)arg2;	// IMP=0x0000000000063544
- (void)loadModel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062c2f
- (void)dealloc;	// IMP=0x0000000000062b68
- (void)_reallocModel;	// IMP=0x0000000000062b19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
