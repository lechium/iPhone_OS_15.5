//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STAskForTimeRequestEvent, STAskForTimeResponseEvent, STResult;

@protocol STAskForTimeBiomeEventWriter
- (STResult *)writeAskForTimeResponseEvent:(STAskForTimeResponseEvent *)arg1;
- (STResult *)writeAskForTimeRequestEvent:(STAskForTimeRequestEvent *)arg1;
@end

