//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHTestIconDescriptor-Protocol.h>

@class NSString;

@interface SBHTestAppIconDescriptor : NSObject <SBHTestIconDescriptor>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000093ccb
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)sbh_iconDescriptorType;	// IMP=0x0000000000093cb6
- (_Bool)sbh_isValidWithError:(id *)arg1;	// IMP=0x0000000000093c27
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093b8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093b44
- (id)init;	// IMP=0x0000000000093a8f
- (id)initWithAppIconBundleIdentifier:(id)arg1;	// IMP=0x0000000000093a1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

