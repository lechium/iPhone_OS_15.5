//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SFDeviceAssetQuery;

__attribute__((visibility("hidden")))
@interface SDDeviceAssetTask : NSObject
{
    long long _state;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    SFDeviceAssetQuery *_query;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003fbc2
@property(retain, nonatomic) SFDeviceAssetQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long state; // @synthesize state=_state;
- (unsigned long long)hash;	// IMP=0x001000000003faeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f970
- (id)description;	// IMP=0x001000000003f852
- (id)init;	// IMP=0x001000000003f816

@end
