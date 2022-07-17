//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/MWFeedParserDelegate-Protocol.h>

@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>
{
    MWFeedParser *_parser;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032eb12
@property(retain, nonatomic) MWFeedParser *parser; // @synthesize parser=_parser;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000032e9e3
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000032e92a
- (void)feedParser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000032e7bd
- (void)feedParserDidFinish:(id)arg1;	// IMP=0x000000000032e7a9
- (void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;	// IMP=0x000000000032e4b8
- (void)getURLsFromInputWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000032e387
- (void)finishRunningWithError:(id)arg1;	// IMP=0x000000000032e321
- (void)cancel;	// IMP=0x000000000032e2b6
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000032e26a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
