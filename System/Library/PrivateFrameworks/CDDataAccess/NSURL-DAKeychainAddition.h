//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (DAKeychainAddition)
+ (int)da_classicPortForScheme:(id)arg1;	// IMP=0x000000000001b2a3
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x000000000001b27b
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;	// IMP=0x000000000001b0ce
+ (id)da_URLWithDirtyString:(id)arg1;	// IMP=0x000000000001afd4
- (id)URLWithUsername:(id)arg1;	// IMP=0x000000000000fceb
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x000000000000fa60
- (id)URLByRemovingLastPathComponent;	// IMP=0x000000000000f8ee
- (id)URLWithoutUsername;	// IMP=0x000000000000f7c3
- (id)uri;	// IMP=0x000000000000f6f7
- (id)da_pathWithoutTrailingRemovingSlash;	// IMP=0x000000000001af18
- (id)da_rawPath;	// IMP=0x000000000001aef8
- (id)da_urlBySettingPath:(id)arg1;	// IMP=0x000000000001aee4
- (id)da_urlBySettingPort:(id)arg1;	// IMP=0x000000000001aed0
- (id)da_urlBySettingHost:(id)arg1;	// IMP=0x000000000001aebc
- (id)da_urlBySettingScheme:(id)arg1;	// IMP=0x000000000001aea8
- (id)da_urlForLogging;	// IMP=0x000000000001ad9b
- (id)da_urlByRemovingUsername;	// IMP=0x000000000001ab59
- (id)da_urlBySettingUsername:(id)arg1;	// IMP=0x000000000001a8bc
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x000000000001a5fb
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x000000000001a32f
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x000000000001a075
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0000000000019d99
- (_Bool)da_isEqualToDAVURL:(id)arg1;	// IMP=0x0000000000019706
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x000000000001b32d
@end
