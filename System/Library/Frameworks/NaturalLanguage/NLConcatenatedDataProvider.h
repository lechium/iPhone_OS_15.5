//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLConcatenatedDataProvider
{
    NSArray *_dataProviders;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003e614
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000003e5c5
- (unsigned long long)numberOfLabels;	// IMP=0x000000000003e576
- (id)documentFrequencyMap;	// IMP=0x000000000003e51b
- (id)vocabularyMap;	// IMP=0x000000000003e4c0
- (id)inverseLabelMap;	// IMP=0x000000000003e465
- (id)labelMap;	// IMP=0x000000000003e40a
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x000000000003e3bb
- (void)_generateMaps;	// IMP=0x000000000003e3b5
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003e227
- (unsigned long long)numberOfInstances;	// IMP=0x000000000003e0ec
- (id)configuration;	// IMP=0x000000000003e091
- (id)initWithDataProviders:(id)arg1;	// IMP=0x000000000003dffe

@end
