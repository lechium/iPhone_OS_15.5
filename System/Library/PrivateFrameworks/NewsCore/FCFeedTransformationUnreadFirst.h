//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadFirst : NSObject <FCFeedTransforming>
{
    FCReadingHistory *_history;	// 8 = 0x8
}

+ (id)transformationWithReadingHistory:(id)arg1;	// IMP=0x00000000000a82fe
- (void).cxx_destruct;	// IMP=0x00000000000a8685
@property(retain, nonatomic) FCReadingHistory *history; // @synthesize history=_history;
- (id)transformFeedItems:(id)arg1;	// IMP=0x00000000000a8354

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

