//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions
{
    _Bool _completeDataPromise;	// 8 = 0x8
    _Bool _createAsMobileBackup;	// 9 = 0x9
    NSArray *_items;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005edbf
- (void).cxx_destruct;	// IMP=0x000000000005f005
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool createAsMobileBackup; // @synthesize createAsMobileBackup=_createAsMobileBackup;
@property(nonatomic) _Bool completeDataPromise; // @synthesize completeDataPromise=_completeDataPromise;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005eef4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005edc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ed2f
- (id)initWithApplicationMetadata:(id)arg1;	// IMP=0x000000000005ecc1

@end

