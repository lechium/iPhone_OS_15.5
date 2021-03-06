//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol HFContactControllerDelegate;

@interface HFContactController : NSObject
{
    id <HFContactControllerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_recipientAvailabilities;	// 16 = 0x10
    unsigned long long _familyMembersState;	// 24 = 0x18
    NSArray *_familyMembers;	// 32 = 0x20
    NSDictionary *_familyMemberDsidToContact;	// 40 = 0x28
    NSArray *_descriptors;	// 48 = 0x30
    NSMutableArray *_familyMemberCallbacks;	// 56 = 0x38
}

+ (id)contactForPhoneNumber:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000000000e786e
+ (id)contactForEmailAddress:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000000000e77d3
+ (id)contactForAppleID:(id)arg1 keyDescriptors:(id)arg2;	// IMP=0x00000000000e772c
+ (id)stringForRecipientStatus:(unsigned long long)arg1;	// IMP=0x00000000000e76c2
- (void).cxx_destruct;	// IMP=0x00000000000e7f0a
@property(retain, nonatomic) NSMutableArray *familyMemberCallbacks; // @synthesize familyMemberCallbacks=_familyMemberCallbacks;
@property(copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(copy, nonatomic) NSDictionary *familyMemberDsidToContact; // @synthesize familyMemberDsidToContact=_familyMemberDsidToContact;
@property(copy, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) unsigned long long familyMembersState; // @synthesize familyMembersState=_familyMembersState;
@property(retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // @synthesize recipientAvailabilities=_recipientAvailabilities;
@property(nonatomic) __weak id <HFContactControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_downloadFamilyMemberPhotos;	// IMP=0x00000000000e7e48
- (void)_loadFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7e3d
- (id)contactForFamilyMemberWithDsid:(id)arg1;	// IMP=0x00000000000e7da3
- (void)fetchFamilyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7d8d
- (unsigned long long)statusForDestination:(id)arg1;	// IMP=0x00000000000e7ce8
- (void)markDestinationsPending:(id)arg1;	// IMP=0x00000000000e7b5c
- (void)entriesUpdated:(id)arg1;	// IMP=0x00000000000e7a51
@property(readonly, copy, nonatomic) NSArray *pendingDestinations;
- (id)initWithKeyDescriptors:(id)arg1;	// IMP=0x00000000000e7431
- (id)init;	// IMP=0x00000000000e737c

@end

