//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAccountUser, PKFamilyMember;

@interface PKSharingIDSManagerHandlerDetails : NSObject
{
    PKFamilyMember *_familyMember;	// 8 = 0x8
    PKAccountUser *_accountUser;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dda1c
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)description;	// IMP=0x00000000000dd947
- (id)aliases;	// IMP=0x00000000000dd87d
- (id)primaryAppleID;	// IMP=0x00000000000dd842
- (id)allHandles;	// IMP=0x00000000000dd732
- (id)initWithFamilyMember:(id)arg1 accountUser:(id)arg2;	// IMP=0x00000000000dd699
- (id)initWithFamilyMember:(id)arg1;	// IMP=0x00000000000dd62e

@end

