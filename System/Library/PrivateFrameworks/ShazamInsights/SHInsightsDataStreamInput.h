//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamInsights/SHInsightsDataStream-Protocol.h>

@class NSString;
@protocol SHInsightsDataStream;

__attribute__((visibility("hidden")))
@interface SHInsightsDataStreamInput : NSObject <SHInsightsDataStream>
{
    id <SHInsightsDataStream> _next;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010f1d
@property(retain, nonatomic) id <SHInsightsDataStream> next; // @synthesize next=_next;
- (_Bool)processData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010efa
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000000010e6f
- (_Bool)readFromURL:(id)arg1 toStream:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010c60
- (_Bool)loadDataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010ad3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
