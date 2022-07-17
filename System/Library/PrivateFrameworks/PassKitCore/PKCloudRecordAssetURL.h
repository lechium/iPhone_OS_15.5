//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PKCloudRecordAssetURL
{
    int _fd;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f63a5
- (void).cxx_destruct;	// IMP=0x00000000003f6680
- (id)_descriptionWithIncludeItem:(_Bool)arg1;	// IMP=0x00000000003f6618
- (id)description;	// IMP=0x00000000003f6589
- (id)descriptionWithItem:(_Bool)arg1;	// IMP=0x00000000003f64f2
- (long long)compare:(id)arg1;	// IMP=0x00000000003f64e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f6453
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f63ad
- (id)assetData;	// IMP=0x00000000003f6213
- (void)dealloc;	// IMP=0x00000000003f61cf
- (id)initWithRecords:(id)arg1;	// IMP=0x00000000003f5f3a

@end
