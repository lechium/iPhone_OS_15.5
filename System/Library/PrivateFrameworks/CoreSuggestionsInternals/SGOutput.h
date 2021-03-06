//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SGOutput : NSObject
{
    NSArray *_outputItems;	// 8 = 0x8
    NSDictionary *_sourceMetadata;	// 16 = 0x10
    NSArray *_exceptionTemplates;	// 24 = 0x18
    NSDictionary *_jsMessageLogs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001de7fd
@property(readonly, nonatomic) NSDictionary *jsMessageLogs; // @synthesize jsMessageLogs=_jsMessageLogs;
@property(readonly, nonatomic) NSArray *exceptionTemplates; // @synthesize exceptionTemplates=_exceptionTemplates;
@property(readonly, nonatomic) NSDictionary *sourceMetadata; // @synthesize sourceMetadata=_sourceMetadata;
@property(readonly, nonatomic) NSArray *outputItems; // @synthesize outputItems=_outputItems;
- (id)initWithOutputItems:(id)arg1 exeptionTemplates:(id)arg2 jsMessageLogs:(id)arg3;	// IMP=0x00000000001de7bb
- (id)initWithOutputItems:(id)arg1 sourceMetadata:(id)arg2 exeptionTemplates:(id)arg3 jsMessageLogs:(id)arg4;	// IMP=0x00000000001de6d9

@end

