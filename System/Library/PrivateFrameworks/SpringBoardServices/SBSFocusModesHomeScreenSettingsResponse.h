//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SBSFocusModesHomeScreenSettingsResponse : NSObject <BSXPCSecureCoding>
{
    NSArray *_snapshots;	// 8 = 0x8
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000008b1f
- (void).cxx_destruct;	// IMP=0x0000000000008c19
@property(retain, nonatomic) NSArray *snapshots; // @synthesize snapshots=_snapshots;
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000008b4a
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000008b27
- (id)initWithSnapshots:(id)arg1;	// IMP=0x0000000000008aac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

