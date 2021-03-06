//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>
{
    NSNumber *_bundleIdInTopAppsVisible;	// 8 = 0x8
    NSNumber *_userLaunchedAppBeforeLeaving;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041835
- (void).cxx_destruct;	// IMP=0x0000000000041b6d
@property(retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving; // @synthesize userLaunchedAppBeforeLeaving=_userLaunchedAppBeforeLeaving;
@property(retain, nonatomic) NSNumber *bundleIdInTopAppsVisible; // @synthesize bundleIdInTopAppsVisible=_bundleIdInTopAppsVisible;
- (id)jsonDict;	// IMP=0x0000000000041a9c
- (_Bool)isEqualToATXAppDirectoryEventMetadata:(id)arg1;	// IMP=0x00000000000419f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004198a
- (unsigned long long)hash;	// IMP=0x0000000000041943
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000418b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004183d
- (id)proto;	// IMP=0x00000000000417b5
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000041719
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000041580
- (id)encodeAsProto;	// IMP=0x0000000000041530
- (id)initWithBundleIdInTopAppsVisible:(id)arg1 userLaunchedAppBeforeLeaving:(id)arg2;	// IMP=0x0000000000041497
- (id)init;	// IMP=0x0000000000041481

@end

