//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SGQuickResponsesClassificationModel
{
}

+ (id)newTransformerInstanceForConfig:(id)arg1 seed:(unsigned long long)arg2 useSeed:(_Bool)arg3;	// IMP=0x0000000000029614
+ (id)featurizerWithMethods:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(struct _NSRange)arg3 tokenNGramRange:(struct _NSRange)arg4 idVectorLength:(unsigned long long)arg5 extraIdOptions:(unsigned long long)arg6 vectorizerStrategy:(unsigned long long)arg7 vectorNormalization:(long long)arg8;	// IMP=0x00000000000294c3
+ (id)newTransformerInstanceForLanguage:(id)arg1 withDictionary:(id)arg2 withSeed:(unsigned long long)arg3 forMode:(unsigned long long)arg4;	// IMP=0x000000000002940d
+ (id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;	// IMP=0x00000000000293ad

@end
