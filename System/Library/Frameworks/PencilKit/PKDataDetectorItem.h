//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DDScannerResult;

@interface PKDataDetectorItem
{
}

+ (id)dataDetectorItemWithQueryItem:(id)arg1 sessionManager:(id)arg2;	// IMP=0x00000000001a833c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8c03
@property(readonly, nonatomic) struct __DDResult *coreResult;
@property(readonly, nonatomic) DDScannerResult *scannerResult;
- (id)strokeColor;	// IMP=0x00000000001a88bf
- (id)_baselinePath;	// IMP=0x00000000001a885b
- (id)drawing;	// IMP=0x00000000001a8814

@end
