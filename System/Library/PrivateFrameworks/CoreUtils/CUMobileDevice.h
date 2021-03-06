//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface CUMobileDevice : NSObject <NSCopying>
{
    _Bool _connected;	// 8 = 0x8
    _Bool _paired;	// 9 = 0x9
    _Bool _placeholder;	// 10 = 0xa
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_internalModel;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_udid;	// 40 = 0x28
    NSString *_wifiAddress;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000074ec0
@property(copy, nonatomic) NSString *wifiAddress; // @synthesize wifiAddress=_wifiAddress;
@property(copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(nonatomic) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *internalModel; // @synthesize internalModel=_internalModel;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
- (id)description;	// IMP=0x0000000000074c55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074b88
- (void)dealloc;	// IMP=0x0000000000074b59

@end

