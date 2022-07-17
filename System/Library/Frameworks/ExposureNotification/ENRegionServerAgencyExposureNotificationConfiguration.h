//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_classificationName;	// 8 = 0x8
    NSURL *_classificationURL;	// 16 = 0x10
    NSString *_localizedExposureDetailBody;	// 24 = 0x18
    NSString *_localizedNotificationSubject;	// 32 = 0x20
    NSString *_localizedNotificationBody;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013618
+ (_Bool)getNotificationConfiguration:(id *)arg1 fromDictionary:(id)arg2 locale:(id)arg3 index:(unsigned char)arg4;	// IMP=0x0000000000012dca
- (void).cxx_destruct;	// IMP=0x0000000000013652
@property(readonly, copy, nonatomic) NSString *localizedNotificationBody; // @synthesize localizedNotificationBody=_localizedNotificationBody;
@property(readonly, copy, nonatomic) NSString *localizedNotificationSubject; // @synthesize localizedNotificationSubject=_localizedNotificationSubject;
@property(readonly, copy, nonatomic) NSString *localizedExposureDetailBody; // @synthesize localizedExposureDetailBody=_localizedExposureDetailBody;
@property(readonly, copy, nonatomic) NSURL *classificationURL; // @synthesize classificationURL=_classificationURL;
@property(readonly, copy, nonatomic) NSString *classificationName; // @synthesize classificationName=_classificationName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001360d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013404
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001335b

@end
