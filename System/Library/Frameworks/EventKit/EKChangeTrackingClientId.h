//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADChangeTrackingClientId, NSString;

@interface EKChangeTrackingClientId : NSObject
{
    NSString *_suffix;	// 8 = 0x8
    NSString *_customClientId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b034e
@property(readonly, copy, nonatomic) NSString *customClientId; // @synthesize customClientId=_customClientId;
@property(readonly, copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) CADChangeTrackingClientId *CADChangeTrackingClientId;
- (id)initWithCustomClientId:(id)arg1 suffix:(id)arg2;	// IMP=0x00000000000b0182
- (id)init;	// IMP=0x00000000000b016c
- (id)initWithSuffix:(id)arg1;	// IMP=0x00000000000b0155
- (id)initWithCustomClientId:(id)arg1;	// IMP=0x00000000000b0141

@end
