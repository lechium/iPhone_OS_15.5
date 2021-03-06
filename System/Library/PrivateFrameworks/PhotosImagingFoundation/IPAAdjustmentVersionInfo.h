//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>
{
    NSString *_platform;	// 8 = 0x8
    NSString *_buildNumber;	// 16 = 0x10
    NSString *_appVersion;	// 24 = 0x18
    long long _schemaRevision;	// 32 = 0x20
}

+ (id)versionInfoFromArchivalRepresentation:(id)arg1;	// IMP=0x0000000000006736
+ (id)_frameworkVersion;	// IMP=0x0000000000006469
+ (id)frameworkVersion;	// IMP=0x0000000000006406
+ (id)_systemVersionPlistPath;	// IMP=0x0000000000006344
+ (id)_systemBuildVersion;	// IMP=0x0000000000006017
+ (id)systemBuildVersion;	// IMP=0x0000000000005fb4
+ (id)currentVersionInfo;	// IMP=0x0000000000005ef5
- (void).cxx_destruct;	// IMP=0x0000000000005ec2
@property(nonatomic) long long schemaRevision; // @synthesize schemaRevision=_schemaRevision;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (_Bool)isEqualToVersionInfo:(id)arg1;	// IMP=0x0000000000005bcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005b72
- (id)archivalRepresentation;	// IMP=0x000000000000599d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000058b6
- (id)description;	// IMP=0x00000000000057c9

@end

