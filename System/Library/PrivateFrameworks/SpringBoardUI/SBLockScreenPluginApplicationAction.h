//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction
{
    NSString *_bundleID;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    unsigned long long _transitionStyle;	// 24 = 0x18
}

+ (id)actionWithBundleID:(id)arg1;	// IMP=0x0000000000015e65
+ (id)actionWithURL:(id)arg1;	// IMP=0x0000000000015de8
- (void).cxx_destruct;	// IMP=0x0000000000016128
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000160ad
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001605d
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000015f4e
- (id)succinctDescription;	// IMP=0x0000000000015efe
- (id)description;	// IMP=0x0000000000015eea
- (_Bool)isApplicationAction;	// IMP=0x0000000000015ee2

@end
