//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFPersonLikeItem-Protocol.h>

@class HMFaceClassification, HMHome, HMPerson, HMPersonManager, NSString, UIImage;

@interface HFFaceClassificationSignificantEventItem <HFPersonLikeItem>
{
    UIImage *_faceCropImage;	// 8 = 0x8
}

+ (id)dateFormatter;	// IMP=0x0000000000186ec3
- (void).cxx_destruct;	// IMP=0x00000000001889c3
@property(retain, nonatomic) UIImage *faceCropImage; // @synthesize faceCropImage=_faceCropImage;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000187311
@property(readonly, nonatomic) HMPersonManager *personManager;
@property(readonly, copy, nonatomic) HMPerson *person;
@property(readonly, copy, nonatomic) HMFaceClassification *faceClassification;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001870d7
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2;	// IMP=0x0000000000186f72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMHome *home;
@property(readonly) Class superclass;

@end
