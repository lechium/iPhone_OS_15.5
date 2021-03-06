//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleMeViewControllerDataSource-Protocol.h>

@class CNContact, NSString;
@protocol PXPerson;

@interface PXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource>
{
    _Bool _requestedSuggestedPerson;	// 8 = 0x8
    _Bool _requestedMeContact;	// 9 = 0x9
    id <PXPerson> _suggestedPerson;	// 16 = 0x10
    CNContact *_meContact;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005e334a
@property(nonatomic, getter=hasRequestedMeContact) _Bool requestedMeContact; // @synthesize requestedMeContact=_requestedMeContact;
@property(nonatomic, getter=hasRequestedSuggestedPerson) _Bool requestedSuggestedPerson; // @synthesize requestedSuggestedPerson=_requestedSuggestedPerson;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) id <PXPerson> suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
- (void)userDidAnswerMeViewController:(id)arg1 withResponse:(_Bool)arg2 suggestedPerson:(id)arg3;	// IMP=0x00000000005e3252
- (id)suggestedPersonForMeViewController:(id)arg1;	// IMP=0x00000000005e3240
- (id)_fetchPersonWithUri:(id)arg1;	// IMP=0x00000000005e3227
- (void)_persistSuggestedPersonAsMe;	// IMP=0x00000000005e31db
- (id)_suggestedPersonForMe;	// IMP=0x00000000005e2d96
- (void)_requestMeContactWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005e2c07
- (void)hasSuggestedPersonForMeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005e2a1d
- (id)init;	// IMP=0x00000000005e2999

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

