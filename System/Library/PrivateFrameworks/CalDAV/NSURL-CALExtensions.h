//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CALExtensions)
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;	// IMP=0x000000000001288f
+ (id)davCompatibleFilenameForFilename:(id)arg1;	// IMP=0x000000000001279d
+ (id)URLWithDirtyString:(id)arg1;	// IMP=0x0000000000013424
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x0000000000013289
+ (int)classicPortForScheme:(id)arg1;	// IMP=0x000000000001321b
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// IMP=0x0000000000012e81
- (id)pathWithoutTrailingRemovingSlash;	// IMP=0x0000000000012dc5
- (id)serverURL;	// IMP=0x0000000000012c62
- (id)unquotedPassword;	// IMP=0x0000000000012c12
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;	// IMP=0x0000000000012a37
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x00000000000124c3
- (id)queryParameters;	// IMP=0x00000000000121ff
- (id)calDAV_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0000000000013e45
- (_Bool)absoluteURLisEqual:(id)arg1;	// IMP=0x0000000000013d76
- (id)URLWithoutPassword;	// IMP=0x0000000000013ce0
- (id)URLWithoutUsername;	// IMP=0x0000000000013bb5
- (id)URLWithUsername:(id)arg1;	// IMP=0x00000000000139ae
- (id)uri;	// IMP=0x00000000000138e2
- (id)initWithDirtyString:(id)arg1;	// IMP=0x0000000000013471
@end

