//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    void *_clients;	// 24 = 0x18
    void *_reserved;	// 32 = 0x20
}

+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014006a
+ (_Bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000014002a
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;	// IMP=0x000000000013ffff
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013f859
+ (id)__unurl;	// IMP=0x000000000013f808
- (void)stopAccessingSecurityScopedResource;	// IMP=0x000000000014011e
- (_Bool)startAccessingSecurityScopedResource;	// IMP=0x00000000001400b9
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id *)arg4;	// IMP=0x000000000013ff10
@property(readonly, copy) NSURL *filePathURL;
- (id)fileReferenceURL;	// IMP=0x000000000013fda8
- (_Bool)isFileReferenceURL;	// IMP=0x000000000013fd43
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;	// IMP=0x000000000013fcbb
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000013fc2a
- (void)removeAllCachedResourceValues;	// IMP=0x000000000013fbb6
- (void)removeCachedResourceValueForKey:(id)arg1;	// IMP=0x000000000013fb2d
- (_Bool)setResourceValues:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013fa86
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013f9d2
- (id)resourceValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013f91f
- (_Bool)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000013f85c

// Remaining properties
@property(readonly, copy) NSString *absoluteString; // @dynamic absoluteString;
@property(readonly, copy) NSURL *absoluteURL; // @dynamic absoluteURL;
@property(readonly, copy) NSURL *baseURL; // @dynamic baseURL;
@property(readonly, copy) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(readonly) const char *fileSystemRepresentation; // @dynamic fileSystemRepresentation;
@property(readonly, getter=isFileURL) _Bool fileURL; // @dynamic fileURL;
@property(readonly, copy) NSString *fragment; // @dynamic fragment;
@property(readonly) _Bool hasDirectoryPath; // @dynamic hasDirectoryPath;
@property(readonly, copy) NSString *host; // @dynamic host;
@property(readonly, copy) NSString *parameterString; // @dynamic parameterString;
@property(readonly, copy) NSString *password; // @dynamic password;
@property(readonly, copy) NSString *path; // @dynamic path;
@property(readonly, copy) NSNumber *port; // @dynamic port;
@property(readonly, copy) NSString *query; // @dynamic query;
@property(readonly, copy) NSString *relativePath; // @dynamic relativePath;
@property(readonly, copy) NSString *relativeString; // @dynamic relativeString;
@property(readonly, copy) NSString *resourceSpecifier; // @dynamic resourceSpecifier;
@property(readonly, copy) NSString *scheme; // @dynamic scheme;
@property(readonly, copy) NSURL *standardizedURL; // @dynamic standardizedURL;
@property(readonly, copy) NSString *user; // @dynamic user;

@end

