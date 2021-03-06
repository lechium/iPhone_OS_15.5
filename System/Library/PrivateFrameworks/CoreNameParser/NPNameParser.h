//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPHMMClassifier, NPNameComponentsData;

@interface NPNameParser : NSObject
{
    double _confidenceThreshold;	// 8 = 0x8
    NPNameComponentsData *_nameComponentsData;	// 16 = 0x10
    NPHMMClassifier *_classifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000050f1
@property(retain) NPHMMClassifier *classifier; // @synthesize classifier=_classifier;
- (unsigned long long)genderMajorityForGivenName:(id)arg1;	// IMP=0x0000000000005033
- (unsigned long long)frequencyOfLatinGivenName:(id)arg1;	// IMP=0x0000000000004fba
- (unsigned long long)frequencyOfLatinFamilyName:(id)arg1;	// IMP=0x0000000000004f3e
- (struct _CFBurstTrie *)sharedNameFrequencyTrieRef;	// IMP=0x0000000000004f28
- (id)normalizedAffix:(id)arg1;	// IMP=0x0000000000004f05
- (_Bool)isSuffix:(id)arg1;	// IMP=0x0000000000004eae
- (_Bool)isPrefix:(id)arg1;	// IMP=0x0000000000004e5a
- (id)normalizeFullname:(id)arg1;	// IMP=0x0000000000004dc0
- (id)parseKoreanName:(id)arg1 normalize:(_Bool)arg2;	// IMP=0x00000000000045de
- (id)parseKoreanName:(id)arg1;	// IMP=0x00000000000045c7
- (id)parseJapaneseName:(id)arg1 normalize:(_Bool)arg2;	// IMP=0x0000000000003c77
- (id)parseJapaneseName:(id)arg1;	// IMP=0x0000000000003c60
- (id)parseChineseName:(id)arg1 normalize:(_Bool)arg2;	// IMP=0x000000000000368d
- (id)parseChineseName:(id)arg1;	// IMP=0x0000000000003676
- (id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5;	// IMP=0x00000000000033df
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(_Bool)arg2 score:(double *)arg3;	// IMP=0x00000000000028c4
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1;	// IMP=0x00000000000028aa
- (id)parseLatinName:(id)arg1 score:(double *)arg2;	// IMP=0x0000000000002890
- (id)personNameComponentsFromString:(id)arg1;	// IMP=0x00000000000027be
- (unsigned long long)namingTraditionForName:(id)arg1;	// IMP=0x0000000000001f30
- (void)dealloc;	// IMP=0x0000000000001ec2
- (id)init;	// IMP=0x0000000000001dc0

@end

