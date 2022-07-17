//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriNaturalLanguageParsing/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface UPModelIdentifier : NSObject <NSCopying>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSString *_appBundleId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002647
@property(readonly, copy) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)hash;	// IMP=0x00000000000025e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000024fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000245b
- (id)initWithAppBundleId:(id)arg1;	// IMP=0x000000000000239e

@end
