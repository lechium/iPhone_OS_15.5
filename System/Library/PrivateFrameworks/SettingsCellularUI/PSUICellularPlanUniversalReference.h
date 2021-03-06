//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/NSCoding-Protocol.h>
#import <SettingsCellularUI/NSCopying-Protocol.h>

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>
{
    NSString *_iccid;	// 8 = 0x8
}

+ (id)referenceFromCellularPlanPendingTransfer:(id)arg1;	// IMP=0x0000000000031df3
+ (id)referenceFromDanglingPlanItem:(id)arg1;	// IMP=0x0000000000031d6c
+ (id)referenceFromPlanItem:(id)arg1;	// IMP=0x0000000000031ce5
- (void).cxx_destruct;	// IMP=0x000000000003214f
@property(retain, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
- (id)description;	// IMP=0x00000000000320fa
- (unsigned long long)hash;	// IMP=0x00000000000320df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032050
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003202d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031ffe
- (id)init;	// IMP=0x0000000000031f55
- (id)initWithIccid:(id)arg1;	// IMP=0x0000000000031eea
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031e8a

@end

