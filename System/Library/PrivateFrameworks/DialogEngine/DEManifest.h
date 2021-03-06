//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface DEManifest : NSObject
{
    _Bool _testOnly;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDictionary *_contents;	// 24 = 0x18
    NSData *_summary;	// 32 = 0x20
    NSData *_version;	// 40 = 0x28
    NSData *_keyVersion;	// 48 = 0x30
    unsigned long long _dirDownloadType;	// 56 = 0x38
    NSURL *_publicationURL;	// 64 = 0x40
    NSURL *_downloadURLPrefix;	// 72 = 0x48
}

+ (id)manifestWithContentsOfURL:(id)arg1;	// IMP=0x00000000000ebf0a
+ (id)anyManifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2;	// IMP=0x00000000000ebed8
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2 filter:(id)arg3;	// IMP=0x00000000000ebea9
+ (id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(_Bool *)arg2 allowAllKeys:(_Bool)arg3 filter:(id)arg4;	// IMP=0x00000000000ebdbd
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000000000ebd8e
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2 filter:(id)arg3;	// IMP=0x00000000000ebd5f
+ (id)anyManifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000000000ebd2d
+ (id)manifestWithContentsOfURL:(id)arg1 encrypted:(_Bool)arg2 allowAllKeys:(_Bool)arg3 filter:(id)arg4;	// IMP=0x00000000000eb6ae
- (void).cxx_destruct;	// IMP=0x00000000000eccbd
@property(nonatomic) _Bool testOnly; // @synthesize testOnly=_testOnly;
@property(retain, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property(retain, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property(nonatomic) unsigned long long dirDownloadType; // @synthesize dirDownloadType=_dirDownloadType;
@property(retain, nonatomic) NSData *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)writeToURL:(id)arg1;	// IMP=0x00000000000ecbc2
- (_Bool)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3;	// IMP=0x00000000000ec133
- (id)init;	// IMP=0x00000000000ec104
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4;	// IMP=0x00000000000ec0e2
- (id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 version:(id)arg5 keyVersion:(id)arg6;	// IMP=0x00000000000ebf3b

@end

