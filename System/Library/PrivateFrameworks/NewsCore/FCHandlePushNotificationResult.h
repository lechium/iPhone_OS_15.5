//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>
{
    _Bool _handled;	// 8 = 0x8
    NSSet *_recordZoneIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ea4ee
@property(readonly, nonatomic) NSSet *recordZoneIDs;
@property(readonly, nonatomic, getter=wasHandled) _Bool handled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea44b

@end
