//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMEventAppAssociating-Protocol.h>

@class NSString;

@interface BMEventAppAssociatingImplementor <BMEventAppAssociating>
{
    NSString *bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000416b5
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID;
- (_Bool)isCompleteWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041681
- (_Bool)isValidWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004164e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

