//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>

@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper>
{
    NSArray *_entries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000936c1
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)proto;	// IMP=0x00000000000933e7
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000930c1
- (id)encodeAsProto;	// IMP=0x0000000000093071
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000092fd5

@end

