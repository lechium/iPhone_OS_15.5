//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSRemotePlistSnapshot-Protocol.h>

@class NSDictionary, NSString;

@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_requestDesktopSiteQuirks;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f5fa8
- (id)plistDataWithFormat:(unsigned long long)arg1;	// IMP=0x00000000000f5eda
- (id)allRequestDesktopSiteQuirks;	// IMP=0x00000000000f5ecc
- (id)requestDesktopSiteSettingForDomain:(id)arg1;	// IMP=0x00000000000f5eb6
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f596d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

