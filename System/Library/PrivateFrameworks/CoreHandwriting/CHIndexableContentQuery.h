//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery
{
    CHRecognitionSessionIndexableContent *_indexableContent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000171110
- (id)debugName;	// IMP=0x00000000001710e0
@property(retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent; // @synthesize indexableContent=_indexableContent;
- (void)q_updateQueryResult;	// IMP=0x0000000000170680
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x0000000000170620

@end
