//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest;

@interface CDMMentionDetectorRequestCommand
{
    SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *_mdRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002a2ae
@property(readonly, nonatomic) SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *mdRequest; // @synthesize mdRequest=_mdRequest;
- (id)commandName;	// IMP=0x000000000002a290
- (id)initWithMDRequest:(id)arg1;	// IMP=0x000000000002a222

@end

