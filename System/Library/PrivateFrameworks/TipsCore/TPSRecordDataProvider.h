//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TPSRecordDataProviderDataSource;

@interface TPSRecordDataProvider : NSObject
{
    id <TPSRecordDataProviderDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a7a6
@property(nonatomic) __weak id <TPSRecordDataProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000005a71b

@end

