//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURenderResult-Protocol.h>

@class NSString;
@protocol NURenderStatistics;

@interface _NURenderResult : NSObject <NURenderResult>
{
    id <NURenderStatistics> _statistics;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000072762
@property(retain) id <NURenderStatistics> statistics; // @synthesize statistics=_statistics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

