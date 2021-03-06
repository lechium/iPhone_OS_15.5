//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, PKPeerPaymentPreferences;

@interface PKPeerPaymentPreferencesUpdateRequest : NSObject
{
    NSMutableSet *_sections;	// 8 = 0x8
    PKPeerPaymentPreferences *_updatedPreferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bcdc7
@property(readonly, copy, nonatomic) NSSet *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) PKPeerPaymentPreferences *updatedPreferences; // @synthesize updatedPreferences=_updatedPreferences;
- (id)description;	// IMP=0x00000000000bcd30
- (void)coalesceWithRequest:(id)arg1;	// IMP=0x00000000000bcc9a
- (id)initWithUpdatedPreferences:(id)arg1 section:(long long)arg2;	// IMP=0x00000000000bcbc5

@end

