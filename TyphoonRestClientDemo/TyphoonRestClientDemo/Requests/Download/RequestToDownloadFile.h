////////////////////////////////////////////////////////////////////////////////
//
//  APPS QUICKLY
//  Copyright 2015 Apps Quickly Pty Ltd
//  All Rights Reserved.
//
//  NOTICE: Prepared by AppsQuick.ly on behalf of Apps Quickly. This software
//  is proprietary information. Unauthorized use is prohibited.
//
////////////////////////////////////////////////////////////////////////////////

#import "TRCRequest.h"

@interface RequestToDownloadFile : NSObject <TRCRequest>

@property (nonatomic, strong) NSURL *downloadUrl;
@property (nonatomic, strong) NSString *outputPath;

@end
