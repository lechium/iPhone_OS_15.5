//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDTapToRadarRequest : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_radarDescription;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSString *_componentName;	// 32 = 0x20
    NSString *_componentVersion;	// 40 = 0x28
    NSString *_componentID;	// 48 = 0x30
    NSString *_relatedRadar;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000de962
@property(retain, nonatomic) NSString *relatedRadar; // @synthesize relatedRadar=_relatedRadar;
@property(retain, nonatomic) NSString *componentID; // @synthesize componentID=_componentID;
@property(retain, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
